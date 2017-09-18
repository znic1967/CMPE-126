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
		Complex(int r, int i);
		int getimaginary();
		int getreal();
		friend Complex operator +(const Complex& coma, const Complex& comb);
		friend ostream& operator <<(ostream& ost, const Complex &c);
		void operator =(Complex c);
	private:
		float real;
		float imaginary;
};

#endif /* COMPLEX_H_ */
