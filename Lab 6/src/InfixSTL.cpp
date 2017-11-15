//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 15 November 2017
// Description : Lab 6
//============================================================================
#include "InfixSTL.h"
#include <stack>
#include <iostream>
#include <fstream>
using namespace std;

InfixSTL::InfixSTL()
{
	infx_expr="";
	pfx_expr="";
	stack_init();
}
void InfixSTL::setInfix(string s)
{
	infx_expr=s;
}
string InfixSTL::get_postfix()
{
	return pfx_expr;
}
void InfixSTL::convertToPostfix(string s)
{
	InfixSTL();
	pfx_expr="";
	infx_expr=s;
	char sym='\0';

	for(unsigned int i=0;i<infx_expr.size();i++)
	{
		sym=infx_expr[i];
		if (isalpha(sym)) //b1
		{
			pfx_expr+=sym;
		}
		else if (sym=='(') op_stk_stl.push(sym); //b2
		else if (sym==')') //b3
		{
			while(op_stk_stl.top()!='(')
			{
				pfx_expr+=op_stk_stl.top();  //pops the symbol and appends it to postfix
				op_stk_stl.pop();
			}
			op_stk_stl.pop(); //pops out remaining '('
		}
		else if (isOperator(sym))
		{
			while (!op_stk_stl.empty() && op_stk_stl.top()!='(' && precedence(op_stk_stl.top(), sym))
			{
				pfx_expr+=op_stk_stl.top();
				op_stk_stl.pop();
			}
			op_stk_stl.push(sym);
		}
	}
	while (!op_stk_stl.empty())
	{
		pfx_expr+=op_stk_stl.top();
		op_stk_stl.pop();
	}
}
bool InfixSTL::precedence(char opr1, char opr2)
{
	// If opr1 has equal or higher precedence than opr2 fxn will return true
	int prec1, prec2;

	switch (opr1) {
	case '*':
	case '/': prec1 = 2; break;
	case '+':
	case '-': prec1 = 1; break;
	case '(': prec1 = 0;
	}

	switch (opr2) {
	case '*':
	case '/': prec2 = 2; break;
	case '+':
	case '-': prec2 = 1; break;
	case '(': prec2 = 0;
	}
	return (prec1 >= prec2);
}
bool InfixSTL::isOperator(const char opr)
{
	switch (opr)
	{
	case '(':
	case  ')':
	case '*':
	case '/':
	case '+':
	case '-':
		return true;
		break;

	default:
		return false;
		break;
	}
}

void InfixSTL::stack_init()
{
	while (!op_stk_stl.empty()) op_stk_stl.pop();
}
