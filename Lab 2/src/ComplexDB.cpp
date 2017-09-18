/*
 * ComplexDB.cpp
 *
 *  Created on: Sep 17, 2017
 *      Author: Lt_Ballzacki
 */

#include "Complex.h"
#include "ComplexDB.h"
#include <iostream>
using namespace std;

ComplexDB::ComplexDB() {
	numbers[50]={};
	length=0;
}

ComplexDB::~ComplexDB() {
	// TODO Auto-generated destructor stub
}

void ComplexDB::add(Complex num){
	numbers[length]=num;
}

void ComplexDB::print(int n){
	if (numbers[n].imaginary<0)
	{
		cout<<numbers[n].real<<numbers[n].imaginary<<"i"<<endl;
	}
	else
	{
	cout<<numbers[n].real<<"+"<<numbers[n].imaginary<<"i"<<endl;
	}
}
