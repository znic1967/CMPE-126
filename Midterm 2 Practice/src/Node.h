/*
 * Node.h
 *
 *  Created on: Oct 22, 2017
 *      Author: Lt_Ballzacki
 */

#ifndef NODE_H_
#define NODE_H_
#include <iostream>
#include <fstream>
using namespace std;
class Node {
public:
	friend ostream& operator<<(ostream& ost, Node p);
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
