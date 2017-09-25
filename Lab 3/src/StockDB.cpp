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
	 //return(false);
	}
	else
	{
	 cout<<"File opened."<<endl;
	}
	while(!fin.eof())
	{
	 StockNode *sp = new StockNode();
	 fin >> *sp;
	 //cout<<"fin"<<endl;
	 insert_front(sp);
	 //cout<<"insert_front"<<endl;
	 //insert_inorder(sp);
	 //insert_inorder2pt(sp);
	}
	cout<<"end of loop"<<endl;
	fin.close();
	cout<<"File closed"<<endl;
	//(true);
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

void StockDB
ostream& operator<<(ostream& ost, StockDB& s)
{
	for (StockNode* i=s.head; i->next!=NULL; i=i->next)
	{
		ost<<i->stk;
	}
	return ost;
}
