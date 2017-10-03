/*
 * StockNode.h
 *
 *  Created on: Oct 3, 2017
 *      Author: Nicholson
 */

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
	Stock getStock();
	StockNode* getNext();
private:
	Stock stk;
	StockNode* next;

};
#endif /* STOCKNODE_H_ */
