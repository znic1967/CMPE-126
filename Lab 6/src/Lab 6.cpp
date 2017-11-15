//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 15 November 2017
// Description : Lab 6
//============================================================================
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include "StackAry.h"
#include "infix.h"
using namespace std;

int main()
{
	Infix i1;
	cout<<"Converting <<A + B - C;>> to postfix..."<<endl;
	i1.convertToPostfix("A + B - C");
	cout<<"Postfix Expression: "<<i1.get_postfix()<<endl<<endl;

	cout<<"Converting <<(A + B ) * C;>> to postfix..."<<endl;
	i1.convertToPostfix("(A + B ) * C;");
	cout<<"Postfix Expression: "<<i1.get_postfix()<<endl<<endl;

	cout<<"Converting <<(A + B) * (C - D);>> to postfix..."<<endl;
	i1.convertToPostfix("(A + B) * (C - D);");
	cout<<"Postfix Expression: "<<i1.get_postfix()<<endl<<endl;


	cout<<"Converting <<A + ((B + C) * (E - F) - G) / (H - I);>> to postfix..."<<endl;
	i1.convertToPostfix("A + ((B + C) * (E - F) - G) / (H - I);");
	cout<<"Postfix Expression: "<<i1.get_postfix()<<endl<<endl;

	cout<<"Converting <<A + B* (C + D ) - E / F * G + H;>> to postfix..."<<endl;
	i1.convertToPostfix("A + B* (C + D ) - E / F * G + H;");
	cout<<"Postfix Expression: "<<i1.get_postfix()<<endl<<endl;
}
