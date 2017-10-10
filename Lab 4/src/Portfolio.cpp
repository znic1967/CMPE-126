//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 1 October 2017
// Description : Lab 3
//============================================================================
#include "Stock.h"
#include "Portfolio.h"
#include "StockNode.h"
#include <iostream>
#include <fstream>
using namespace std;

Portfolio::Portfolio()
{
	length=0;
	head=NULL;
	tail=NULL;
}
StockNode* Portfolio::getHead()
{
	return head;
}
StockNode* Portfolio::getTail()
{
	return tail;
}
void Portfolio::load(string file)
{
	ifstream fin;
	ofstream fout;
	fin.open(file.c_str());
	fout.open("load.txt");
	Stock tmp=Stock();
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
	 tmp=sp->getStock();
	 fout<<tmp;
	}
	fin.close();
	fout.close();
	cout<<"File closed."<<endl;
}
void Portfolio::store()
{
	ofstream fout;
	fout.open("store.txt");
	if (fout.fail())
		{
			cout<<"File failed to open."<<endl;
		}
	Stock tmp=Stock();
	for (StockNode* i=head; i!=NULL; i=i->getNext())
		{
			tmp=i->getStock();
			fout<<tmp;
		}
}
void Portfolio::insert_back(StockNode *p)
{
	if (length==0)
	{
		 p->setNext(NULL);
		 p->setPrev(NULL);
		 head = tail = p;
		 length++;
		 return;
	}
	p->setPrev(tail);
	tail->setNext(p);
	p->setNext(NULL);
	tail=p;
	length++;
}
StockNode* Portfolio::returnMiddle()
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
Portfolio Portfolio::split(Portfolio db2, StockNode* middle)
{
	db2.head=middle->getNext();
	db2.tail=tail;
	db2.length=length/2;
	tail=middle;
	tail->setNext(NULL);
	return db2;
}
ostream& operator<<(ostream& ost, Portfolio& s)
{
	for (StockNode* i=s.head; i!=NULL; i=i->getNext())
	{
		Stock tmp=i->getStock();
		cout<<tmp;
	}
	return ost;
}

void Portfolio::reversePrint()
{
	for (StockNode* i=tail; i!=head; i=i->getPrev())
	{
		Stock tmp=i->getStock();
		cout<<tmp;
	}
}

