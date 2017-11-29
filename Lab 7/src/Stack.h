//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 29 November 2017
// Description : Lab 7
//============================================================================
#ifndef STACK_H_
#define STACK_H_

class Stack {
public:
	Stack(int max=100);
	~Stack();
	void push(char item);
	char pop();

	bool isEmpty();
	void print();
	void clear();

	//Getters
	int getTopIndex();
private:
	int size, top;
	char *list;
};

#endif /* STACK_H_ */
