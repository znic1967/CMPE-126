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
	cout<<">>Part 1: Complex Numbers..."<<endl;
	string input_file="complex.txt";
	ComplexDB cDB;
	Complex max=cDB.getData(0);
	cDB.load(input_file);
	cout<<"==========Data Loaded=========="<<endl;
	cout<<cDB;
	max=cDB.largest(0,cDB.getLength(),max);
	cout<<"\nMax: "<<max<<endl;

	//Part 2
	cout<<"\n>>Part 2: Reverse Print a Forward Linked List..."<<endl;
	string input_file2="stocks.txt";
	StockDB stkDB;
	stkDB.load(input_file2);
	cout<<"==========Data Loaded=========="<<endl;
	cout<<stkDB;
	cout<<"\nReverse print..."<<endl;
	stkDB.reversePrint(stkDB.getHead());
}
