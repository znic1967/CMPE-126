/*
 * Search.cpp
 *
 *  Created on: Dec 8, 2017
 *      Author: Nicholson
 */

#include "Search.h"
#include <iostream>
#include <fstream>
using namespace std;

Search::Search()
{
	length=0;
	loaded=false;
	head=NULL;
	tail=NULL;
	for (int i=0; i<50; i++)
	{
		data[i]=0;
	}
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
		loaded=true;
	}
	if (data_type=="ll") //load data into doubly linked list
	{
		while(fin>>num)
		{

		}
	}
}

//void Search::insert_back(int num)
//{
//	Node temp;
//	p->setNext(NULL);
//	if (length==0)
//	{
//		p->setNext(NULL);
//		 head = tail = p;
//		 length++;
//		 return;
//	}
//	tail->setNext(p);
//	tail=p;
//	length++;
//}
void Search::printData()
{
		for (int i=0; i<length; i++)
		{
			cout<<data[i]<<" ";
		}
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
	sequentialRecursion(data, size-1, e);
}

int Search::binarySearchNoRecursion(int value, int left, int right)
{
	while (left <= right) {
		int middle = (left + right) / 2;
		if (data[middle] == value)
			  return middle;
		else if (data[middle] > value)
			  right = middle - 1;
		else
			  left = middle + 1;
		}
	    return -1;
}
int Search::binarySearchRecursion(int value, int left, int right)
{
		int middle = (left + right) / 2;
		if (left>right) return -1;
		if (data[middle] == value) return middle;
		else if (data[middle] > value)
			binarySearchRecursion(value, left, middle-1);
		else
			binarySearchRecursion(value, middle+1, right);
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

void Search::setDataArray(int index, int content)
{
	data[index]=content;
}
int* Search::getDataAry()
{
	return data;
}
int Search::getLength()
{
	return length;
}

void Search::setLength(int l)
{
	length=l;
}
bool Search::getLoaded()
{
	return loaded;
}
void Search::swap(int &v1, int &v2)
{
	int temp;
	temp=v1;
	v1=v2;
	v2=temp;
}
