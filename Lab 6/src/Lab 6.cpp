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
using namespace std;

int main() {
	ifstream fin;
	fin.open("infix.txt");
	if (fin.fail()) cout<<"File failed to open."<<endl;
	else cout<<"File opened."<<endl;
	string lines[10];
	int i=0;
	while(!fin.eof())
	{
		getline(fin,lines[i]);
		i++;
	}
	//cout<<lines[2];

	StackAry stk;
	string pfx="";
	char sym;
	string line=lines[0];
	for(unsigned int i=0;i<line.size();i++)
	{
		cout<<i<<" "<<line[i]<<endl;
		sym=line[i];
		if (isalpha(sym)) //b1
		{
			//cout<<"Here";
			pfx.append(1, sym);
			cout<<"Pfx: "<<pfx<<endl;
		}
		if (sym=='(') stk.push(sym); //b2
		if (sym==')')
		{
			int top=stk.getTop(); //initialize top for loop
			while(stk.getItem(top)!='(')
			{
				top=stk.getTop();
				pfx.append(1,stk.pop()); //pops the symbol and appends it to postfix
			}
			stk.pop(); //pops out remaining '('
		}
		if
	}
}

bool precedence(char opr1, char opr2)
{
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
}//end precedence
