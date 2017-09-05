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

	//Testing shit2
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
	string temp;
	string real;
	int r;
	int i;
	const char cstr[]="";
	Complex nums[50];

	while (fin>>input[length])
	{
		int pos=0;
		temp=input[length];
		pos=temp.find("+");
		//cout<<pos<<" ";
		if (pos==-1)
		{
			pos=temp.find("-",1);
		}
		else
		{
			//cout<<"Real: "<<temp.substr(0,pos)<<" ";
			real=temp.substr(0,pos);
			r=static_cast<int>(real);
			cout<<r+1<<" ";


		}
		length++;
	}



}
