/*
 * Search.h
 *
 *  Created on: Dec 8, 2017
 *      Author: Nicholson
 */

#ifndef SEARCH_H_
#define SEARCH_H_
#include "Node.h"
#include <iostream>
using namespace std;
class Search {
public:
	Search();
	void load(string data_type);
	bool sequentialNoRecursion(int e);
	bool sequentialRecursion(int ary[], int size, int e);
	int binarySearchNoRecursion(int value, int left, int right);
	int binarySearchRecursion(int value, int left, int right);
	void printData();
	void sortData();
	void swap(int &v1, int &v2);
	//Getters
	int getLength();
	bool getLoaded();
	int* getDataAry();
	//Setters
	void setDataArray(int index, int content);
	void setLength(int l);
private:
	int data[50];
	Node* head;
	Node* tail;
	int length;
	bool loaded;
};

#endif /* SEARCH_H_ */
