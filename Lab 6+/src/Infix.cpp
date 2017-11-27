//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 15 November 2017
// Description : Lab 6
//============================================================================
#include "Infix.h"
#include "StackAry.h"
#include <iostream>
#include <fstream>
using namespace std;

Infix::Infix()
{
	infx_expr="";
	pfx_expr="";
	StackAry temp(20);
	op_stk=temp;
}
void Infix::setInfix(string s)
{
	infx_expr=s;
}
string Infix::get_postfix()
{
	return pfx_expr;
}
StackAry Infix::get_stack()
{
	return op_stk;
}
void Infix::convertToPostfix(string s)
{
	Infix();
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
		else if (sym=='(') op_stk.push(sym); //b2
		else if (sym==')') //b3
		{
			while(op_stk.getTop()!='(')
			{
				pfx_expr+=op_stk.getTop();  //pops the symbol and appends it to postfix
				op_stk.pop();
			}
			op_stk.pop(); //pops out remaining '('
		}
		else if (isOperator(sym))
		{
			while (!op_stk.isEmpty() && op_stk.getTop()!='(' && precedence(op_stk.getTop(), sym))
			{
				pfx_expr+=op_stk.getTop();
				op_stk.pop();
			}
			op_stk.push(sym);
		}
	}
	while (!op_stk.isEmpty())
	{
		pfx_expr+=op_stk.getTop();
		op_stk.pop();
	}
}

bool Infix::precedence(char opr1, char opr2)
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
bool Infix::isOperator(const char opr)
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


