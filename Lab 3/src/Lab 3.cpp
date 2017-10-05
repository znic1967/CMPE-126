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
	//cout<<"end of program";
	cout<<"=======Data Loaded======="<<endl;
	cout<<db;
	mid=db.returnMiddle(); //Returns a pointer to the middle element
	db.split(db2,mid);
	cout<<"=======Left List======"<<endl;
	cout<<db;
	cout<<"\n=======Right List======"<<endl;
	//cout<<db2.getHead()->stk<<endl;
	cout<<db2;
	return 0;

}
