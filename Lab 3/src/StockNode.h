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

//	//Getters
//	Stock getStock();
//	StockNode* getNext();
//
//	//Setters
//	void setStock(Stock s);
//	void setNext(StockNode* n);
	Stock stk;
	StockNode* next;
private:

};
#endif /* STOCKNODE_H_ */
