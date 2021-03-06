//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 10 December 2017
// Description : Lab 8
//============================================================================
#include "Search.h"
#include "Node.h"
#include <iostream>
#include <fstream>
using namespace std;

Search::Search()
{
	length=0;
	head=NULL;
	tail=NULL;
	for (int i=0; i<50; i++)
	{
		data[i]=0;
	}
}
int* Search::getDataAry()
{
	return data;
}
int Search::getLength()
{
	return length;
}
Node* Search::getHead()
{
	return head;
}
void Search::clear()
{
	length=0;
}
void Search::load(string data_type)
{
	ifstream fin;
	fin.open("data.txt");
	if (fin.fail()) cout<<"File failed to open."<<endl;
	int num=0;
	if (data_type=="ary") //load data into array
	{
		while (fin>>num)
		{
			data[length]=num;
			length++;
		}
	}
	if (data_type=="ll") //load data into doubly linked list
	{
		while(fin>>num)
		{
			insert_back(num);
		}
	}
	fin.close();
}
void Search::insert_back(int num)
{
	Node *temp = new Node();
	temp->setElement(num);
	temp->setNext(NULL);
	if (length==0)
	{
		temp->setNext(NULL);
		temp->setPrev(NULL);
		head = tail = temp;
		length++;
		return;
	}
	temp->setPrev(tail);
	tail->setNext(temp);
	temp->setNext(NULL);
	tail=temp;
	length++;
}
void Search::printData()
{
		for (int i=0; i<length; i++)
		{
			cout<<data[i]<<" ";
		}
}
void Search::printList()
{
	for (Node* i=head; i!=NULL; i=i->getNext())
	{
		int tmp=i->getElement();
		cout<<tmp<<" ";
	}
}
void Search::sortData()
{
	for (int i=0; i <length; i++) {        // sort every target object from 0 to the end
		int smallest=data[i];    // assume target one is the minimum
		int min_position=i;
		for (int j=min_position+1; j<length; j++)
		{
			if (data[j] < smallest)
			{
				smallest=data[j];    // new min is in m
				min_position=j;
			}

		}
		swap(data[i], data[min_position]);
	}
}
void Search::swap(int &v1, int &v2)
{
	int temp;
	temp=v1;
	v1=v2;
	v2=temp;
}
bool Search::sequentialNoRecursion(int e)
{
	for (int i=0; i<length; i++)
	{
		if (data[i]==e) return true;
	}
	return false;
}

bool Search::sequentialRecursion(int ary[], int size, int e)
{
	if (size==0)
		return false;
	if (data[size]==e)
		{
			return true;
		}
	return sequentialRecursion(data, size-1, e);
}
bool Search::binarySearchNoRecursion(int value, int left, int right)
{
	while (left <= right)
	{
		int middle = (left + right) / 2;
		if (data[middle] == value) return true;
		else if (data[middle] > value) right = middle - 1;
		else left = middle + 1;
	}
	    return false;
}
bool Search::binarySearchRecursion(int value, int left, int right)
{
		int middle = (left + right) / 2;
		if (left>right) return false;
		if (data[middle] == value) return middle;
		else if (data[middle] > value)
			return binarySearchRecursion(value, left, middle-1);
		else
			return binarySearchRecursion(value, middle+1, right);
}
bool Search::linkedListNoRecursion(int element)
{
	for (Node* i=head; i!=NULL; i=i->getNext())
	{
		if (element==i->getElement())
		{
			return true;
		}
	}
	return false;
}

bool Search::linkedListRecursion(int element, Node* head)
{
	if (head==NULL) return false;
	if (element==head->getElement())
	{
		return true;
	}
	return linkedListRecursion(element, head->getNext());
}
