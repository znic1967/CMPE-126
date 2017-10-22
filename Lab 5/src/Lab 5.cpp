//============================================================================
// Name        : Lab.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Complex.h"
#include "ComplexDB.h"
#include "Stock.h"
#include "StockDB.h"
#include "StockNode.h"
using namespace std;

int main() {
	string input_file="complex.txt";
	ComplexDB db;
	Complex max=db.getData(0);
	db.load(input_file);
	max=db.largest(0,db.getLength(),max);
	cout<<"Max: "<<max<<endl;

}
