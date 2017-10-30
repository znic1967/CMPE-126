//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 22 October 2017
// Description : Lab 5
//============================================================================
#include "Complex.h"
#include "ComplexDB.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string>
#include <cstring>
#include <sstream>
using namespace std;

ComplexDB::ComplexDB()
{
	maxsize = 20;
	length = 0;
	data = new Complex [maxsize];
}
ComplexDB::ComplexDB(int max)
{
	maxsize = max;
	length = -1; //iterator in load function sets it to one on first loop.
	data = new Complex [maxsize];
}
ComplexDB::~ComplexDB()
{
	delete [] data;
}
Complex ComplexDB::getData(int element)
{
	Complex temp=data[element];
	return temp;
}
int ComplexDB::getLength()
{
	return length;
}
ostream& operator <<(ostream& ost, const ComplexDB &c)
{
	for (int i=0;i<c.length;i++)
		{
			ost<<c.data[i]<<endl;
		}
	return ost;
}
void ComplexDB::increase_size(int newMaxSize)
{
	maxsize = newMaxSize;
	Complex * temp = new Complex[maxsize];

	for(int i = 0; i < length; i++)
	{
		temp[i] = data[i];
	}
	delete [] data;
	Complex* data = new Complex[maxsize];
	for(int i = 0; i < length; i++)
	{
		data[i] = temp[i];
	}
	delete [] temp;
}
void ComplexDB::load(string file)
{
	ifstream fin;
	fin.open(file.c_str());
	if (fin.fail())
	{
		cout<<"File failed to open :("<<endl;
	}
	else
	{
		cout<<"File opened."<<endl;
	}
	string line;
	float real;
	float imaginary;
	char i;
	char plus;
	while (!fin.eof())
	{	real=0; imaginary=0;
		fin>>real>>plus>>imaginary>>i; //plus and i place holders. Throw out values.
		if (real!=0)
		{
			data[length].setReal(real);
			data[length].setImaginary(imaginary);
			length++;
		}
	}
	fin.close();
	cout<<"File closed."<<endl;
}
Complex ComplexDB::largest(int lowest, int highest, Complex max)
{
	if (lowest==highest) //base case
	{
		return max;
	}
	else //(lowest<highest)
	{
		if(max<data[lowest])
		{
			max=data[lowest];
		}
		return largest(lowest+1,highest,max);
	}
}
