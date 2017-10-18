//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 12 October 2017
// Description : Lab 4
//============================================================================
#ifndef STOCKNODE_H_
#define STOCKNODE_H_

#include <iostream>
#include <fstream>
#include "stock.h"
class StockNode
{
public:
	StockNode();
	StockNode(StockNode* node);
	friend istream& operator>>(istream& in, StockNode& s);
	//Getters
	Stock getStock();
	StockNode* getNext();
	StockNode* getPrev();
	//Setters
	void setStock(Stock s);
	void setNext(StockNode* n);
	void setPrev(StockNode* p);
private:
	Stock stk;
	StockNode* next;
	StockNode* prev;
};
#endif /* STOCKNODE_H_ */
