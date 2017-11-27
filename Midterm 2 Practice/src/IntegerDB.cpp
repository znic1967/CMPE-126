/*
 * IntegerDB.cpp
 *
 *  Created on: Oct 22, 2017
 *      Author: Lt_Ballzacki
 */

#include "IntegerDB.h"
#include "Node.h"
#include <iostream>
#include <fstream>
using namespace std;

IntegerDB::IntegerDB() {
	head=NULL;
	tail=NULL;
	length=0;
}

Node* IntegerDB::getHead()
{
	return head;
}
ostream& operator<<(ostream& ost, IntegerDB& s)
{
	for (Node* i=s.head; i!=NULL; i=i->getNext())
	{
		int tmp=i->getNum();
		cout<<tmp<<endl;
	}
	return ost;
}

void IntegerDB::load(string input)
{
	ifstream fin;
	fin.open(input.c_str());
	if(fin.fail()) cout<<"File failed to open"<<endl;
	else cout<<"File open successfully."<<endl;

	int temp=0;
	while(!fin.eof())
	{
		fin>>temp;
		insert_back(temp);
	}
	fin.close();
	cout<<"File closed."<<endl;
}

void IntegerDB::insert_back(int n)
{
	Node* p=new Node();
	p->setNum(n);
	if (length==0)
	{
		 p->setNext(NULL);
		 head = tail = p;
		 length++;
		 return;
	}
	tail->setNext(p);
	p->setNext(NULL);
	tail=p;
	length++;
}

void IntegerDB::split(IntegerDB &one, IntegerDB & two, int cmp)
{
	for (Node* i=head; i!=NULL; i=i->getNext()){
		int temp=i->getNum();
		if (temp<cmp) one.insert_back(temp);
		else two.insert_back(temp);
	}
}

void IntegerDB::insert(Node n,int x)
{
	Node* temp = head;
	int info=n.getNum();
	for (int i=0; i<x; i++)
	{
		temp=temp->getNext();
	}
	Node* insert= new Node;
	insert->setNum(info);
	insert->setNext(temp->getNext());
	temp->setNext(insert);
}

void IntegerDB::delete_list(Node *current)
{
	Node* temp=new Node;
	if (current==NULL){
		cout<<"Here";
		return;
	}
	else
	{
		head=temp;
		temp->setNext(NULL);
		delete_list(head->getNext());
	}
	head=NULL;
}
void IntegerDB::reverse_print()
{
	rec_reverse_print(head);
}

void IntegerDB::rec_reverse_print(Node* p)
{
	if(head==NULL) return;
	rec_reverse_print(p->getNext());
	cout<<*p;
}

