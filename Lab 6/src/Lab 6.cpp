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
#include "InfixSTL.h"
using namespace std;

int main()
{
	cout<<"=====Programming Exercise #9====="<<endl;
	Infix infx;

	cout<<"Converting <<A + B - C;>> to postfix..."<<endl;
	infx.convertToPostfix("A + B - C");
	cout<<"Postfix Expression: "<<infx.get_postfix()<<endl<<endl;

	cout<<"Converting <<(A + B ) * C;>> to postfix..."<<endl;
	infx.convertToPostfix("(A + B ) * C;");
	cout<<"Postfix Expression: "<<infx.get_postfix()<<endl<<endl;

	cout<<"Converting <<(A + B) * (C - D);>> to postfix..."<<endl;
	infx.convertToPostfix("(A + B) * (C - D);");
	cout<<"Postfix Expression: "<<infx.get_postfix()<<endl<<endl;


	cout<<"Converting <<A + ((B + C) * (E - F) - G) / (H - I);>> to postfix..."<<endl;
	infx.convertToPostfix("A + ((B + C) * (E - F) - G) / (H - I);");
	cout<<"Postfix Expression: "<<infx.get_postfix()<<endl<<endl;

	cout<<"Converting <<A + B* (C + D ) - E / F * G + H;>> to postfix..."<<endl;
	infx.convertToPostfix("A + B* (C + D ) - E / F * G + H;");
	cout<<"Postfix Expression: "<<infx.get_postfix()<<endl<<endl;



	cout<<"\n=====Programming Exercise #11====="<<endl;
	InfixSTL infxSTL;

	cout<<"Converting <<A + B - C;>> to postfix..."<<endl;
	infxSTL.convertToPostfix("A + B - C");
	cout<<"Postfix Expression: "<<infxSTL.get_postfix()<<endl<<endl;

	cout<<"Converting <<(A + B ) * C;>> to postfix..."<<endl;
	infxSTL.convertToPostfix("(A + B ) * C;");
	cout<<"Postfix Expression: "<<infxSTL.get_postfix()<<endl<<endl;

	cout<<"Converting <<(A + B) * (C - D);>> to postfix..."<<endl;
	infxSTL.convertToPostfix("(A + B) * (C - D);");
	cout<<"Postfix Expression: "<<infxSTL.get_postfix()<<endl<<endl;


	cout<<"Converting <<A + ((B + C) * (E - F) - G) / (H - I);>> to postfix..."<<endl;
	infxSTL.convertToPostfix("A + ((B + C) * (E - F) - G) / (H - I);");
	cout<<"Postfix Expression: "<<infxSTL.get_postfix()<<endl<<endl;

	cout<<"Converting <<A + B* (C + D ) - E / F * G + H;>> to postfix..."<<endl;
	infxSTL.convertToPostfix("A + B* (C + D ) - E / F * G + H;");
	cout<<"Postfix Expression: "<<infxSTL.get_postfix()<<endl<<endl;
}
