//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 22 October 2017
// Description : Lab 5
//============================================================================
#include "Stock.h"
#include "StockDB.h"
#include "StockNode.h"
#include <iostream>
#include <fstream>
using namespace std;

StockDB::StockDB()
{
	length=0;
	head=NULL;
	tail=NULL;
}
StockNode* StockDB::getHead()
{
	return head;
}
StockNode* StockDB::getTail()
{
	return tail;
}
ostream& operator<<(ostream& ost, StockDB& s)
{
	for (StockNode* i=s.head; i!=NULL; i=i->getNext())
	{
		Stock tmp=i->getStock();
		cout<<tmp;
	}
	return ost;
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
	 insert_back(sp);
	}
	fin.close();
	cout<<"File closed."<<endl;
}
void StockDB::insert_back(StockNode *p)
{
	p->setNext(NULL);
	if (length==0)
	{
		p->setNext(NULL);
		 head = tail = p;
		 length++;
		 return;
	}
	tail->setNext(p);
	tail=p;
	length++;
}
void StockDB::reversePrint(StockNode* head)
{
	if (head==NULL) return;
	reversePrint(head->getNext());
	Stock temp=head->getStock();
	cout<<temp;
}
