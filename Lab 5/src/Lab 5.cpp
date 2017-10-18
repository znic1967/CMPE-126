//============================================================================
// Name        : Lab.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Complex.h"
#include "ComplexDB.h"
using namespace std;

int main() {
	string input_file="complex.txt";
	ComplexDB db;
	db.load(input_file);
	Complex* max=db.getData();
	max=db.largest(max,0);
	cout<<"Max: "<<max<<endl;
}
