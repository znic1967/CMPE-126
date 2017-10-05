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
	length++;
	//cout<<"Insert";
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
	cout<<"\nLength :"<<length<<endl;
	cout<<"Middle: "<<mid->stk<<endl;
	cout<<"Position: "<<middle<<endl; cout<<endl;
	return mid; //Returns a node pointer to the middle address
}

void StockDB::split(StockDB left, StockDB right, StockNode* middle)
{
	StockNode* right_head=middle->next;
	left.head=head;
	left.tail=middle;
	right.head=right_head;
	right.tail=tail;
	left.tail->next=NULL;
	cout<<"=======First List======"<<endl;
	cout<<left;
	cout<<"\n=======Right List======"<<endl;
	cout<<right;
}
ostream& operator<<(ostream& ost, StockDB& s)
{
	cout<<"Head: "<<s.head->stk<<endl;
	cout<<"Tail: "<<s.tail->stk<<endl;
	for (StockNode* i=s.head; i!=NULL; i=i->next)
	{
		cout<<i->stk;
	}
	return ost;
}
