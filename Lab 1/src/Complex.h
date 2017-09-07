/*
 * Complex.h
 *
 *  Created on: Sep 4, 2017
 *      Author: Lt_Ballzacki
 */

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
		void operator =(const Complex& c);
	private:
		int real;
		int imaginary;
};

#endif /* COMPLEX_H_ */
