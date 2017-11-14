/*
 * StackAry.h
 *
 *  Created on: Oct 22, 2017
 *      Author: Lt_Ballzacki
 */

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
	//Getters
	char getItem(int i);
	int getTop();
private:
	int size;
	int top;
	char *list;
};

#endif /* STACKARY_H_ */
