//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 22 October 2017
// Description : Lab 5
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

	//Getters
	Stock getStock();
	StockNode* getNext();

	//Setters
	void setStock(Stock s);
	void setNext(StockNode* n);

	//Overloaded Operators
	friend istream& operator>>(istream& in, StockNode& s);
private:
	Stock stk;
	StockNode* next;
};
#endif /* STOCKNODE_H_ */
