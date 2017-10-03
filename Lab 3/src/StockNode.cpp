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


istream& operator>>(istream& in, StockNode& s){
	in>>s.stk.symbol>>s.stk.cost>>s.stk.shares;
	return in;
}
