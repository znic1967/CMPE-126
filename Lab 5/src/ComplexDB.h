
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
	void load(string file);
	void add();
	void CDelete();
	Complex largest(Complex num, int i);
	//void print(int n);
	//void printall();
	friend ostream& operator <<(ostream& ost, const ComplexDB &c);
	virtual ~ComplexDB();

	//Getters
	Complex* getData();
private:
	Complex *data;
	int maxsize;
	int length;
	void increase_size(int size);
	void sort_items();
};

#endif /* COMPLEXDB_H_ */
