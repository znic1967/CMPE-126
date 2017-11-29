//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 29 November 2017
// Description : Lab 7
//============================================================================
#include "Stack.h"
#include <iostream>
using namespace std;
Stack::Stack(int max)
{
	size=max;
	top=0;
	list=new char(max);
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
bool Stack::isEmpty()
{
	if (top>0) return false;
	else return true;
}
void Stack::print()
{
	while(!isEmpty())
	{
		cout<<pop()<<" ";
	}
}
void Stack::clear()
{
	while(!isEmpty())
		{
			pop();
		}
}
