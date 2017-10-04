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
	StockDB db, dbl, dbr;
	StockNode* snp;
	string file="stocks.txt";
	db.load(file);
	//cout<<"end of program";
	cout<<"=======Data Loaded======="<<endl;
	cout<<db;
	snp=db.returnMiddle();
	//db.split(snp);
	return 0;

}
