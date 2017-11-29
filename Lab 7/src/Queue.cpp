//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 29 November 2017
// Description : Lab 7
//============================================================================
#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue()
{
	front = 0;
	back = 0;
	count = 0;
	maxsize = 100;
	list = new char[maxsize];
}

Queue::~Queue()
{
	delete [] list;
}
char Queue::getFrontChar()
{
	return list[front];
}
void Queue::addQueue(char c)
{
	list[back] = c;
	count++;
	back = (back +1) % maxsize;
}

void Queue::delQueue()
{
	count--;
	front = (front + 1) % maxsize;
}
void Queue::print()
{
	int temp=front;
	for (int i=0; i<count; i++){
		cout<< list[temp++]<<" ";
	}
}
void Queue::clear()
{
	while(count!=0)
	{
		delQueue();
	}
}
