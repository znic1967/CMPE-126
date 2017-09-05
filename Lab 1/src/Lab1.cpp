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
#include <cstring>
#include <cctype>
#include <cstdlib>
#include "complex.h"
using namespace std;

int main()
{
	ifstream fin;
	fin.open("complex.txt");
	if (fin.fail())
	{
		cout<<"File failed to open :("<<endl;
	}
	else
	{
		cout<<"File opened successfully!"<<endl;
	}

	int length=0;
	int iAry[50];
	int rAry[50];
	string input[50];
	string parser;
	const char cstr[]="";
	Complex nums[50];

	while (fin>>input[length])
	{
		parser=input[length];
		nums[length].real=parser[0];
		length++;
	}



}
