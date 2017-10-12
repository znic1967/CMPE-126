//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 12 October 2017
// Description : Lab 4
//============================================================================
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
string Stock::getSymbol()
{
	return symbol;
}
int Stock::getCost()
{
	return cost;
}
int Stock::getShares()
{
	return shares;
}
void Stock::setSymbol(string s)
{
	symbol=s;
}
void Stock::setCost(int c)
{
	cost=c;
}
void Stock::setShares(int s)
{
	shares=s;
}
void Stock::operator=(const Stock& s){
	symbol=s.symbol;
	cost=s.cost;
	shares=s.shares;
}
bool operator <(const Stock& s1, const Stock& s2){
	return (s1.cost<s2.cost);
}
ostream& operator<<(ostream& ost, Stock& s){
	ost<<"-"<<s.getSymbol();
	ost<<"\t$"<<s.getCost();
	ost<<".00 /share"<<"\tx"<<s.getShares();
	ost<<endl;
	return ost;
}
