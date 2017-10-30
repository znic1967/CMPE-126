//============================================================================
// Name        : Midterm.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Node.h"
#include "IntegerDB.h"
using namespace std;

void three();
void four();
void six();
int fib(int n);
int main()
{
	//six();
	cout<<fib(7);
}

void three(IntegerDB db)
{
	IntegerDB db1, db2;
	db.split(db1,db2,60);
	cout<<"Less than 60..."<<endl;
	cout<<db1;
	cout<<"Greater than 60..."<<endl;
	cout<<db2;
}
void four(IntegerDB db)
{
	Node n;
	n.setNum(58);
	db.load("int_list.txt");
	cout<<"Data Loaded..."<<endl;
	cout<<db;
	db.insert(n,4);
	cout<<"58 inserted..."<<endl;
	cout<<db;
}

void six()
{
	IntegerDB db;
	string input="int_list.txt";
	db.load("int_list.txt");
	cout<<"Data Loaded..."<<endl;
	cout<<db;
	db.delete_list(db.getHead());

	if(db.getHead()==NULL)
	{
		cout<<"List Cleared"<<endl;
	}
}

int fib(int n){
	if ((n==0||n==1)) return n;
	else
	{
		return (fib(n-1)+fib(n-2));
	}
}
