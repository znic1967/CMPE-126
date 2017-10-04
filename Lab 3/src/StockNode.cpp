//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 1 October 2017
// Description : Lab 3
//============================================================================

#include "StockNode.h"
#include "Stock.h"

StockNode::StockNode() {
	stk=Stock();
	next=NULL;
}

//Stock StockNode::getStock()
//{
//	return stk;
//}
//
//StockNode* StockNode::getNext()
//{
//	return next;
//}
//void StockNode::setNext(StockNode* n)
//{
//	next=n;
//}
//void StockNode::setStock(Stock s)
//{
//	stk=s;
//}

istream& operator>>(istream& in, StockNode& s){
	Stock tmp;
	string sym;
	int cost=0;
	int shares=0;
	in>>sym>>cost>>shares;
	tmp.setSymbol(sym); tmp.setCost(cost); tmp.setShares(shares);
	s.stk=tmp;
	return in;
}

