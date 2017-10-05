//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 1 October 2017
// Description : Lab 3
//============================================================================

#include <iostream>
#include "Stock.h"
#include "StockDB.h"
#include "StockNode.h"
using namespace std;

int main() {
	StockDB db, db2;
	StockNode* mid;
	string file="stocks.txt";
	db.load(file);
	cout<<"=======Data Loaded======="<<endl;
	cout<<db;
	mid=db.returnMiddle(); //Returns a pointer to the middle element
	db2=db.split(db2,mid); //Set db2 to a list returned from split
	cout<<"=======Left List======"<<endl;
	cout<<db;
	cout<<"\n=======Right List======"<<endl;
	cout<<db2;
}
