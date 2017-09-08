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
#include <sstream>
#include "complex.h"
using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;
	fin.open("complex.txt");
	fout.open("complexObj.txt");
	if (fin.fail())
	{
		cout<<"File failed to open :("<<endl;
	}
	else
	{
		cout<<"File opened successfully!"<<endl;
	}
	if (fout.fail())
	{
		cout<<"File failed to open :("<<endl;
	}
	else
	{
		cout<<"File opened successfully!"<<endl;
	}

	int length=0;
	string input[50];
	string temp;
	string sreal;
	string simaginary;
	int r;
	int i;
	Complex total(0,0);

	while (fin>>input[length]) //Parse input
	{
		int pos=0;
		int pos2=1;
		int len=0;
		temp=input[length];
		pos=temp.find("+");
		pos2=temp.find("i");
		if (pos==-1) //If imaginary part is negative.
		{
			pos=temp.find("-",1);

			if (pos==-1) //If there is no plus or minus there the line is not a complex number.
			{
				continue;
			}
			len=pos2-pos;
			sreal=temp.substr(0,pos);
			simaginary=temp.substr(pos,len);
		}
		else
		{
			len=pos2-pos;
			sreal=temp.substr(0,pos);
			simaginary=temp.substr(pos+1,len-1);
		}
		stringstream sr(sreal);
		stringstream si(simaginary);
		sr>>r; //Converts string to int.
		si>>i; //Converts string to int.
		Complex cmplx(r,i);
		fout<<cmplx;
		total=total+cmplx;
		length++;
	}
	fout<<"Total: "<<total;
	fin.close();
	fout.close();
}
