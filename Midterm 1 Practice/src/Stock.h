/*
 * Stock.h
 *
 *  Created on: Sep 20, 2017
 *      Author: Lt_Ballzacki
 */

#ifndef STOCK_H_
#define STOCK_H_

#include <iostream>
using namespace std;

class Stock {
public:
	Stock();
	Stock(string s, int c,int sh);
	string symbol;
	int cost;
	int shares;
	friend ostream& operator>> (istream&, Stock&);
	virtual ~Stock();
};

#endif /* STOCK_H_ */

