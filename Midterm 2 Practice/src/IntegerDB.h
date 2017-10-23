/*
 * IntegerDB.h
 *
 *  Created on: Oct 22, 2017
 *      Author: Lt_Ballzacki
 */

#ifndef INTEGERDB_H_
#define INTEGERDB_H_

#include "Node.h"
#include <iostream>
using namespace std;
class IntegerDB {
public:
	IntegerDB();

	//Overloaded Operators
	friend ostream& operator<<(ostream& ost, IntegerDB& s);

	void load(string input);
	void insert_back(int n);
	void split(IntegerDB one, IntegerDB two, int d);
private:
	Node* head;
	Node* tail;
	int length;
};

#endif /* INTEGERDB_H_ */
