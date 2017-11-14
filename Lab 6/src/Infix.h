/*
 * Infix.h
 *
 *  Created on: Nov 13, 2017
 *      Author: Lt_Ballzacki
 */

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

private:
	string infx_expr, pfx_expr;
	StackAry op_stk;


	bool precedence(char opr1, char opr2);
	bool isOperator(const char opr);

};

#endif /* INFIX_H_ */
