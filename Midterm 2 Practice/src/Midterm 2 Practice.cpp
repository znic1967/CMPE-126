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

int main() {
string input="int_list.txt";
IntegerDB db, db1, db2;
db.load("int_list.txt");
cout<<"Data Loaded..."<<endl;
cout<<db;
db.split(db1,db2,60);
cout<<"Less than 60..."<<endl;
cout<<db1;
cout<<"Greater than 60..."<<endl;
cout<<db2;
}
