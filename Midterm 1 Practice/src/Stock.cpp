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
ostream& operator>> (istream& ist, Stock& s){
		ist>>s.symbol>>s.cost>>s.shares;
		return cout;
}

ostream& operator<<(ostream& ost, Stock& s){
	ost<<"Symbol: "<<s.symbol<<" Cost: "<<s.cost<<" Shares: "<<s.shares<<endl;
	return ost;
}
void Stock::operator=(const Stock& s){
	symbol=s.symbol;
	cost=s.cost;
	shares=s.shares;
}

bool operator <(const Stock& s1, const Stock& s2){
	return (s1.cost<s2.cost);
}
