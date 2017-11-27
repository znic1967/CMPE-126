/*
 * Queue.cpp
 *
 *  Created on: Nov 15, 2017
 *      Author: Nicholson
 */

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
