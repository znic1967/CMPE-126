/*
 * Complex.cpp
 *
 *  Created on: Sep 4, 2017
 *      Author: Lt_Ballzacki
 */

#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex() {
	real=0;
	imaginary=0;
}

Complex::Complex(int r, int i){
	real=r;
	imaginary=i;
}
int Complex::getreal(){
	return real;
}
int Complex::getimaginary(){
	return imaginary;
}

Complex operator +(const Complex& coma, const Complex& comb)
{
	int rl=coma.real+comb.real;
	int imag=coma.imaginary+comb.imaginary;
	Complex result(rl,imag);
	return result;
}

ostream& operator <<(ostream& ost, const Complex &c)
{
	if (c.imaginary<0) //If the imaginary number is negative no + is needed in formatting.
	{
		ost<<c.real<<c.imaginary<<"i"<<endl;
	}
	else
	{
		ost<<c.real<<"+"<<c.imaginary<<"i"<<endl;
	}
	return ost;
}

void Complex::operator =(const Complex& c)
{
	real=c.getreal();
	imaginary=c.getimaginary();
}
