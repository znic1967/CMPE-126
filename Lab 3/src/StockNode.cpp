/*
 * StockNode.cpp
 *
 *  Created on: Oct 3, 2017
 *      Author: Nicholson
 */

#include "StockNode.h"
#include "Stock.h"

StockNode::StockNode() {
	stk=Stock();
	next=NULL;
}

Stock StockNode::getStock()
{
	return stk;
}

StockNode* StockNode::getNext()
{
	return next;
}
void StockNode::setNext(StockNode* n)
{
	next=n;
}
void StockNode::setStock(Stock s)
{
	stk=s;
}

istream& operator>>(istream& in, StockNode& s){
	in>>s.getStock().getSymbol();
			//s.stk.cost>>s.stk.shares;
	return in;
}
