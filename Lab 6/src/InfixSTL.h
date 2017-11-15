//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 15 November 2017
// Description : Lab 6
//============================================================================
#ifndef INFIXSTL_H_
#define INFIXSTL_H_
#include <iostream>
#include <stack>
using namespace std;

class InfixSTL {
public:
	InfixSTL();
	void convertToPostfix(string s);
	void stack_init();

	//Setters
	void setInfix(string s);

	//Getters
	string get_postfix();

private:
	string infx_expr, pfx_expr;
	stack<char> op_stk_stl;


	bool precedence(char opr1, char opr2);
	bool isOperator(const char opr);

};

#endif /* INFIXSTL_H_ */
