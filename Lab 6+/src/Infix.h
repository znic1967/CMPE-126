//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 15 November 2017
// Description : Lab 6
//============================================================================
#ifndef INFIX_H_
#define INFIX_H_
#include <iostream>
#include "StackAry.h"
using namespace std;

class Infix {
public:
	Infix();
	void convertToPostfix(string s);

	//Setters
	void setInfix(string s);

	//Getters
	string get_postfix();
	StackAry get_stack();

private:
	string infx_expr, pfx_expr;
	StackAry op_stk;


	bool precedence(char opr1, char opr2);
	bool isOperator(const char opr);

};

#endif /* INFIX_H_ */
