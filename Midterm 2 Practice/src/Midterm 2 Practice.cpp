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
void seven();
void eight();
int fib(int n);
void TowerOfHanoi ( int NumberOfDisc,  char Source='A', char Destination='B',  char Temp='C');
int main()
{
	//six();
	//cout<<fib(7);
	//seven();
	TowerOfHanoi(3);
	eight();
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

void seven()
{
	IntegerDB db;
	string input="int_list.txt";
	db.load("int_list.txt");
	cout<<"Data Loaded..."<<endl;
	cout<<db;
	cout<<"Reverse print"<<endl;
	db.reverse_print();
}

void TowerOfHanoi ( int NumberOfDisc,  char From, char To,  char Temp) {
	cout << "ToH from " << From << " to " << To << " using " << Temp << endl;
	if (NumberOfDisc == 0) return;
	TowerOfHanoi( NumberOfDisc-1, From, Temp, To);
	cout << "move " << NumberOfDisc << "th from " << From << " to " << To << endl;
	TowerOfHanoi( NumberOfDisc-1, Temp, To, From);
}

void eight()
{
	int a[5]={10,20,30,40,50};
	//cout<<a++;
}
