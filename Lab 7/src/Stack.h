/*
 * Stack.h
 *
 *  Created on: Nov 15, 2017
 *      Author: Nicholson
 */

#ifndef STACK_H_
#define STACK_H_

class Stack {
public:
	Stack();
	~Stack();
	void push(char item);
	char pop();

	//Getters
	int getTopIndex();
private:
	int size, top;
	char *list;
};

#endif /* STACK_H_ */
