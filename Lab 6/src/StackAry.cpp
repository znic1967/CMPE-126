//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 15 November 2017
// Description : Lab 6
//============================================================================
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
	top=0;
	delete [] list;
}
char StackAry::getItem(int i)
{
	return list[i];
}
char StackAry::getTop()
{
	return list[top-1]; //top points to garbage, top-1 is the top of stack
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
void StackAry::print()
{
	while(!isEmpty())
	{
		cout<<pop()<<" ";
	}
}
