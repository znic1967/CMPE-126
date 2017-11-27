/*
 * Stack.cpp
 *
 *  Created on: Nov 15, 2017
 *      Author: Nicholson
 */

#include "Stack.h"

Stack::Stack() {
	// TODO Auto-generated constructor stub

}

Stack::~Stack() {
	// TODO Auto-generated destructor stub
}

void Stack::push(char item)
{
	list[top++]=item;
}
char Stack::pop()
{
	return list[--top];
}
int Stack::getTopIndex()
{
	return top;
}
