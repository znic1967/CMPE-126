//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 22 October 2017
// Description : Lab 5
//============================================================================
#include <iostream>
#include "Complex.h"
#include "ComplexDB.h"
#include "Stock.h"
#include "StockDB.h"
#include "StockNode.h"
using namespace std;

int main() {

	//Part 1
	string input_file="complex.txt";
	ComplexDB cDB;
	Complex max=cDB.getData(0);
	cDB.load(input_file);
	max=cDB.largest(0,cDB.getLength(),max);
	cout<<"Max: "<<max<<endl;

	//Part 2
	string input_file2="stocks.txt";
	StockDB stkDB;
	stkDB.load(input_file2);
	cout<<"==========Data Loaded=========="<<endl;
	cout<<stkDB;
	cout<<"Reverse print of forward linked list..."<<endl;
	stkDB.reversePrint(stkDB.getHead());
}
