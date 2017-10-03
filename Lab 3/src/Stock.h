//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 1 October 2017
// Description : Lab 3
//============================================================================

#ifndef STOCK_H_
#define STOCK_H_

#include <iostream>
#include <fstream>
using namespace std;

class Stock {
public:
	Stock();
	Stock(string s, int c,int sh);

	//friend ostream& operator>> (istream& ist, Stock& s);
	friend ostream& operator<<(ostream& ost, Stock& s);

	void operator=(const Stock& s);
	friend bool operator <(const Stock& s1, const Stock& s2);
	string symbol;
	int cost;
	int shares;
private:

};

class StockNode
{
public:
	friend istream& operator>>(istream& in, StockNode& s);
	Stock stk;
	StockNode* next;
private:

};

#endif /* STOCK_H_ */

