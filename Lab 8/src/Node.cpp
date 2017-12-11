//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 10 December 2017
// Description : Lab 8
//============================================================================
#include "Node.h"
#include <iostream>
using namespace std;

Node::Node()
{
	prev=NULL;
	next=NULL;
	element=0;
}
int Node::getElement()
{
	return element;
}
Node* Node::getNext()
{
	return next;
}
Node* Node::getPrev()
{
	return prev;
}
void Node::setElement(int e)
{
	element = e;
}
void Node::setNext(Node* n)
{
	next=n;
}
void Node::setPrev(Node* n)
{
	prev=n;
}
