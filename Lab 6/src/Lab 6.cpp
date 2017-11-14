//============================================================================
// Name        : Lab.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
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
	Infix infx;
	string pfx="";
	cout<<"Converting <<A + B - C>> to postfix..."<<endl;
	infx.convertToPostfix("A + B - C");
	cout<<"Postfix Expression: "<<infx.get_postfix()<<endl;




}
