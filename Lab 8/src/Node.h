/*
 * Node.h
 *
 *  Created on: Dec 10, 2017
 *      Author: Lt_Ballzacki
 */

#ifndef NODE_H_
#define NODE_H_

class Node {
public:
	Node();

	//Getters
	//Stock getStock();
	//StockNode* getNext();

	//Setters
	//void setStock(Stock s);
	//void setNext(StockNode* n);

	//Overloaded Operators
	//friend istream& operator>>(istream& in, StockNode& s);
private:
	int element;
	Node* next;
	Node* prev;
};

#endif /* NODE_H_ */
