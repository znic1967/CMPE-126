/*
 * Search.h
 *
 *  Created on: Dec 8, 2017
 *      Author: Nicholson
 */

#ifndef SEARCH_H_
#define SEARCH_H_

class Search {
public:
	Search();
	void load();
	bool sequentialNoRecursion(int e);
	bool sequentialRecursion(int ary[], int size, int e);
	void printData();
	//Getters
	int getLength();
	bool getLoaded();
	int* getDataAry();
	//Setters
	void setDataArray(int index, int content);
	void setLength(int l);
private:
	int data[50];
	int length;
	bool loaded;
};

#endif /* SEARCH_H_ */
