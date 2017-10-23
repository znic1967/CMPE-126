/*
 * Node.h
 *
 *  Created on: Oct 22, 2017
 *      Author: Lt_Ballzacki
 */

#ifndef NODE_H_
#define NODE_H_

class Node {
public:
	Node();

	//Getters
	int getNum();
	Node* getNext();
	//Setters
	void setNum(int n);
	void setNext(Node* p);
private:
	int num;
	Node* next;
};

#endif /* NODE_H_ */
