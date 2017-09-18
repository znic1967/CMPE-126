//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 7 September 2017
// Description : Lab 1
//============================================================================

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
	Complex result;
	result.real=coma.real+comb.real;
	result.imaginary=coma.imaginary+comb.imaginary;
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

void Complex::operator =(Complex c)
{
	real=c.getreal();
	imaginary=c.getimaginary();

}
