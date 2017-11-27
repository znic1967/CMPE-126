/*
 * Node.cpp
 *
 *  Created on: Oct 22, 2017
 *      Author: Lt_Ballzacki
 */

#include "Node.h"
#include <iostream>
#include <fstream>
using namespace std;

Node::Node()
{
	num=0;
	next=NULL;
}
int Node::getNum()
{
	return num;
}

Node* Node::getNext()
{
	return next;
}
void Node::setNum(int n)
{
	num=n;
}

void Node::setNext(Node* p)
{
	next=p;
}

ostream& operator<<(ostream& ost, Node p)
{
	ost<<p.num;
	return ost;
}
