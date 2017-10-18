//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 12 October 2017
// Description : Lab 4
//============================================================================
#include "StockNode.h"
#include "Stock.h"

StockNode::StockNode() {
	stk=Stock();
	next=NULL;
	prev=NULL;
}
StockNode::StockNode(StockNode* node)
{
	stk=node->getStock();
	next=node->getNext();
	prev=node->getPrev();
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
StockNode* StockNode::getPrev()
{
	return prev;
}
void StockNode::setPrev(StockNode* p)
{
	prev=p;
}
void StockNode::setStock(Stock s)
{
	stk=s;
}
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
