//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 1 October 2017
// Description : Lab 3
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
	friend istream& operator>>(istream& in, StockNode& s);
	//Getters
	Stock getStock();
	StockNode* getNext();
	//Setters
	void setStock(Stock s);
	void setNext(StockNode* n);
private:
	Stock stk;
	StockNode* next;
	StockNode* prev;
};
#endif /* STOCKNODE_H_ */
