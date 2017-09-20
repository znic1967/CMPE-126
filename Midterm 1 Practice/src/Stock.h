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

	friend ostream& operator>> (istream&, Stock&);
	friend ostream& operator<<(ostream& ost, Stock&s);
	void operator=(const Stock& s);
	friend bool operator <(const Stock& s1, const Stock& s2);
	string symbol;
	int cost;
	int shares;
private:

};

#endif /* STOCK_H_ */

