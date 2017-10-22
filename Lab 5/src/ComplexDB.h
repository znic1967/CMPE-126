//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 22 October 2017
// Description : Lab 5
//============================================================================
#ifndef COMPLEXDB_H_
#define COMPLEXDB_H_
#include "complex.h"
#include <iostream>
using namespace std;

class ComplexDB
{
public:
	ComplexDB();
	ComplexDB(int max);
	virtual ~ComplexDB();

	//Getters
	Complex getData(int element);
	int getLength();

	//Overloaded Operators
	friend ostream& operator <<(ostream& ost, const ComplexDB &c);

	void load(string file);
	void add();
	void CDelete();
	Complex largest(int lowest, int highest, Complex max);
private:
	Complex *data;
	int maxsize;
	int length;
	void increase_size(int size);
	void sort_items();
};
#endif /* COMPLEXDB_H_ */
