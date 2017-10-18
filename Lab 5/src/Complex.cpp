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
#include <fstream>
#include <cmath>
using namespace std;

Complex::Complex() {
	real=0;
	imaginary=0;
}

Complex::Complex(float r, float i){
	real=r;
	imaginary=i;
}
float Complex::getReal(){
	return real;
}
float Complex::getImaginary(){
	return imaginary;
}
void Complex::setReal(int a){
	real = a;
}
void Complex::setImaginary(int a){
	imaginary = a;
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
	real=c.getReal();
	imaginary=c.getImaginary();

}
bool operator <(const Complex& a, const Complex& b){
	float valA=sqrt(pow(a.real,2)+pow(a.imaginary,2));
	float valB=sqrt(pow(b.real,2)+pow(b.imaginary,2));
	if (valA<valB) return true;
	else return false;
}

