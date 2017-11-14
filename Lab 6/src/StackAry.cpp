/*
 * StackAry.cpp
 *
 *  Created on: Oct 22, 2017
 *      Author: Lt_Ballzacki
 */

#include "StackAry.h"
#include <iostream>
using namespace std;
StackAry::StackAry(int max) {
	size=max;
	top=0;
	list=new char(max);
}

StackAry::~StackAry()
{
	delete list;
}

char StackAry::getItem(int i)
{
	return list[i];
}
int StackAry::getTop()
{
	return top;
}
void StackAry::push(char item)
{
	list[top++]=item;
}
char StackAry::pop()
{
	return list[--top];
}
bool StackAry::isEmpty()
{
	if (top>0) return false;
	else return true;
}
