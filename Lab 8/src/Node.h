//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 10 December 2017
// Description : Lab 8
//============================================================================
#ifndef NODE_H_
#define NODE_H_

class Node {
public:
	Node();

	//Getters
	int getElement();
	Node* getNext();
	Node* getPrev();

	//Setters
	void setElement(int e);
	void setNext(Node* n);
	void setPrev(Node* n);
private:
	int element;
	Node* next;
	Node* prev;
};

#endif /* NODE_H_ */
