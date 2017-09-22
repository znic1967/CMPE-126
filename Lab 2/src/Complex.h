//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 7 September 2017
// Description : Lab 1
//============================================================================

#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>
using namespace std;

class Complex {

	public:
		Complex();
		Complex(float r, float i);
		float getimaginary();
		float getreal();
		void setReal(int a);
		void setImaginary(int a);
		friend Complex operator +(const Complex& coma, const Complex& comb);
		friend ostream& operator <<(ostream& ost, const Complex &c);
		void operator =(Complex c);
		friend bool operator <(const Complex& a, const Complex& b);
		//friend bool operator <(const Complex& obj);
	private:
		float real;
		float imaginary;
};

#endif /* COMPLEX_H_ */
