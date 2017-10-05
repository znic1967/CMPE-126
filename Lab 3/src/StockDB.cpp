//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 1 October 2017
// Description : Lab 3
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
StockNode* StockDB::returnMiddle()
{
	int middle=length/2;
	int counter=0;
	StockNode* mid;
	for (StockNode* i=head; i->getNext()!=NULL; i=i->getNext())
		{
			if (counter==middle)
			{
				mid=i;
			}
			counter++;
		}
	Stock tmp=mid->getStock();
	cout<<"\nMiddle: "<<tmp;
	cout<<"Position: "<<middle<<endl; cout<<endl;
	return mid; //Returns a node pointer to the middle address
}

StockDB StockDB::split(StockDB db2, StockNode* middle)
{
	db2.head=middle->getNext();
	db2.tail=tail;
	db2.length=length/2;
	tail=middle;
	tail->setNext(NULL);
	return db2;
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
