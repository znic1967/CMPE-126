//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 10 December 2017
// Description : Lab 8
//============================================================================
#ifndef SEARCH_H_
#define SEARCH_H_
#include "Node.h"
#include <iostream>
using namespace std;
class Search {
public:
	//Constructor
	Search();

	//Getters
	int getLength();
	bool getLoaded();
	bool getListIn();
	int* getDataAry();
	Node* getHead();

	//Member Functions
	void load(string data_type);
	void insert_back(int num);
	void printData();
	void printList();
	void sortData();
	void swap(int &v1, int &v2);
	bool sequentialNoRecursion(int e);
	bool sequentialRecursion(int ary[], int size, int e);
	int binarySearchNoRecursion(int value, int left, int right);
	int binarySearchRecursion(int value, int left, int right);
	int linkedListNoRecursion(int element);
	int linkedListRecursion(int element, Node* head);
private:
	int data[30];
	Node* head;
	Node* tail;
	int length;
	bool loaded;
	bool listIn;
};

#endif /* SEARCH_H_ */
