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
	length++;
}

void ComplexDB::print(int n){
	if (numbers[n].getimaginary()<0) //Imaginary negative so no need to add +
	{
		cout<<numbers[n].getreal()<<numbers[n].getimaginary()<<"i"<<endl;
	}
	else
	{
		cout<<numbers[n].getreal()<<"+"<<numbers[n].getimaginary()<<"i"<<endl;
	}
}

void ComplexDB::printall(){
	for (int i=0;i<length;i++)
	{
		cout<<numbers[i]<<" ";
	}
}

ostream& operator <<(ostream& ost, const ComplexDB &c)
{
	for (int i=0;i<c.length;i++)
		{
			ost<<c.numbers[i]<<" ";
		}
	return ost;
}