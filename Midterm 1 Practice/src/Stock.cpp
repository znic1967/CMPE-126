/*
 * Stock.cpp
 *
 *  Created on: Sep 20, 2017
 *      Author: Lt_Ballzacki
 */

#include "Stock.h"
#include <iostream>
#include <fstream>
using namespace std;

Stock::Stock() {
	symbol="$";
	cost=0;
	shares=0;
}

Stock::Stock(string s, int c,int sh){
			symbol=s;
			cost=c;
			shares=sh;
}
ostream& operator>> (istream& in, Stock& s){
		in>>s.symbol>>s.cost>>s.shares;
		return cout;
}
