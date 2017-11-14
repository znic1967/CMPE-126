//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 22 October 2017
// Description : Lab 5
//============================================================================
#ifndef STOCK_H_
#define STOCK_H_

#include <iostream>
#include <fstream>
using namespace std;

class Stock
{
public:
	Stock();
	Stock(string s, int c,int sh);

	//Getters
	string getSymbol();
	int getCost();
	int getShares();

	//Setters
	void setSymbol(string s);
	void setCost(int c);
	void setShares(int s);

	//Overloaded Operators
	void operator=(const Stock& s);
	friend bool operator <(const Stock& s1, const Stock& s2);
	friend ostream& operator<<(ostream& ost, Stock& s);
private:
	string symbol;
	int cost;
	int shares;
};
#endif /* STOCK_H_ */

