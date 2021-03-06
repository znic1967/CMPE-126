//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 7 September 2017
// Description : Lab 1
//============================================================================
//TEST
#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex() {
	real=0;
	imaginary=0;
}

Complex::Complex(float r, float i){
	real=r;
	imaginary=i;
}
float Complex::getreal(){
	return real;
}
float Complex::getimaginary(){
	return imaginary;
}

Complex operator +(const Complex& coma, const Complex& comb)
{
	Complex result;
	result.real=coma.real+comb.real;
	result.imaginary=coma.imaginary+comb.imaginary;
	return result;
}

ostream& operator <<(ostream& ost, const Complex &c)
{
	if (c.imaginary<0) //If the imaginary number is negative no + is needed in formatting.
	{
		ost<<c.real<<c.imaginary<<"i";
	}
	else
	{
		ost<<c.real<<"+"<<c.imaginary<<"i";
	}
	return ost;
}

void Complex::operator =(Complex c)
{
	real=c.getreal();
	imaginary=c.getimaginary();

}
