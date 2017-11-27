//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 15 November 2017
// Description : Lab 6
//============================================================================
#ifndef STACKARY_H_
#define STACKARY_H_
#include <iostream>
using namespace std;

class StackAry {
public:
	StackAry(int max=100);
	~StackAry();
	void push(char item);
	char pop();
	bool isEmpty();
	void print();

	//Getters
	char getItem(int i);
	char getTop();
private:
	int size;
	int top;
	char *list;
};

#endif /* STACKARY_H_ */
