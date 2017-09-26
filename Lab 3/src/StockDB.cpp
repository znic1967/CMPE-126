/*
 * StockDB.cpp
 *
 *  Created on: Sep 20, 2017
 *      Author: Lt_Ballzacki
 */

#include "Stock.h"
#include "StockDB.h"
#include <iostream>
#include <fstream>
using namespace std;

StockDB::~StockDB(){
	for (StockNode* i=head; i!=NULL; i=i->next)
	{
		delete i;
	}
}
StockDB::StockDB()
{
	length=0;
	head=NULL;
	tail=NULL;
}
void StockDB::load(string file)
{
	ifstream fin;
	fin.open(file.c_str());
	if (fin.fail())
	{
		cout<<"File failed to open."<<endl;
	}
	else
	{
	 cout<<"File opened."<<endl;
	}
	while(!fin.eof())
	{
	 StockNode *sp = new StockNode();
	 fin >> *sp;
	 insert_front(sp);
	}
	fin.close();
	cout<<"File closed"<<endl;
}

void StockDB::insert_front(StockNode *p) // insert front
{
	if (length == 0)
	{
		p->prev = p->next = NULL;
		head = tail = p;
		length++;
		return;
	}
	p->next = head;
	p->prev = NULL;
	p->next->prev = p;
	head = p;
	length++;
}

StockNode* StockDB::returnMiddle()
{
	int middle=length/2;
	int counter=0;
	StockNode* mid;
	for (StockNode* i=head; i->next!=NULL; i=i->next)
		{
			if (counter==middle)
			{
				mid=i;
			}
			counter++;
		}
	cout<<"\nMiddle: "<<mid->stk;
	cout<<"Position: "<<middle<<endl; cout<<endl;
	return mid; //Returns a node pointer to the middle address
}

void StockDB::split(StockNode* snp)
{
	cout<<"===First list==="<<endl;
	for (StockNode* i=head; i->next!=snp->next; i=i->next)
		{
			cout<<i->stk;
		}
	cout<<"===Second list==="<<endl;
		for (StockNode* i=snp; i->next!=NULL; i=i->next)
			{
				cout<<i->stk;
			}
}
ostream& operator<<(ostream& ost, StockDB& s)
{
	for (StockNode* i=s.head; i->next!=NULL; i=i->next)
	{
		ost<<i->stk;
	}
	return ost;
}
