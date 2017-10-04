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
	// cout<<"Here";
	}
	//cout<<"Here1";
	while(!fin.eof())
	{
	 StockNode *sp = new StockNode();
	// cout<<"Here";
	 fin >> *sp;
	 //cout<<"Input";
	 insert_back(sp);
	 //cout<<sp->stk;
	}
	fin.close();
	cout<<"File closed."<<endl;
	//cout<<"Head: "<<head->stk<<endl;
}


void StockDB::insert_back(StockNode *p)
{
	p->next=NULL;
	if (length==0)
	{
		p->next = NULL;
		 head = tail = p;
		 length++;
		 return;
	}
	tail->next=p;
	tail=p;
	//cout<<"Insert";
}
//StockNode* StockDB::returnMiddle()
//{
//	int middle=length/2;
//	int counter=0;
//	StockNode* mid;
//	for (StockNode* i=head; i->next!=NULL; i=i->next)
//		{
//			if (counter==middle)
//			{
//				mid=i;
//			}
//			counter++;
//		}
//	cout<<"\nMiddle: "<<mid->getStock();
//	cout<<"Position: "<<middle<<endl; cout<<endl;
//	return mid; //Returns a node pointer to the middle address
//}

//void StockDB::split(StockNode* snp)
//{
//	cout<<"===First list==="<<endl;
//	for (StockNode* i=head; i->next!=snp->next; i=i->next)
//		{
//			cout<<i->stk;
//		}
//	cout<<"===Second list==="<<endl;
//		for (StockNode* i=snp; i->next!=NULL; i=i->next)
//			{
//				cout<<i->stk;
//			}
//}


ostream& operator<<(ostream& ost, StockDB& s)
{
	for (StockNode* i=s.head; i->next!=NULL; i=i->next)
	{
		cout<<i->stk;
	}
	return ost;
}
