//============================================================================
// Name        : Lab.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Stock.h"
#include "StockDB.h"
using namespace std;

int main() {
	StockDB db, dbl, dbr;
	StockNode* snp;
	string file="stocks.txt";
	db.load(file);
	//cout<<"end of program";
	cout<<db;
	snp=db.returnMiddle();
	db.split(snp);
	return 0;

}
