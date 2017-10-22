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

ComplexDB::ComplexDB(){
	maxsize = 20;
	length = 0;
	data = new Complex [maxsize];
}
ComplexDB::ComplexDB(int max){
	maxsize = max;
	length = -1; //iterator in load function sets it to one on first loop.
	data = new Complex [maxsize];
}
ComplexDB::~ComplexDB() {
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
void ComplexDB::increase_size(int newMaxSize){
	maxsize = newMaxSize;
	Complex * temp = new Complex[maxsize];

	for(int i = 0; i < length; i++){
		temp[i] = data[i];
	}

	delete [] data;

	Complex* data = new Complex[maxsize];

	for(int i = 0; i < length; i++){
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
		cout<<"File opened successfully!"<<endl;
	}
	string line;
	float real;
	float imaginary;
	char i;
	char plus;

	while (!fin.eof())
	{	real=0; imaginary=0;
		fin>>real>>plus>>imaginary>>i; //real and i placeholders. Throw out values.
		if (real!=0)
		{
			data[length].setReal(real);
			data[length].setImaginary(imaginary);
			//cout<<data[length]<<endl;
			length++;
		}
	}
}
Complex ComplexDB::largest(int lowest, int highest)
{
	Complex max;
	if (lowest==highest)
	{
		max=data[lowest];
		return max;
	}
	else //(lowest<highest)
	{
		if(max<data[lowest])
		{
			max=data[lowest];
			largest(lowest+1);
		}
	}
}

ostream& operator <<(ostream& ost, const ComplexDB &c)
{
	for (int i=0;i<c.length;i++)
		{
			ost<<c.data[i]<<" ";
		}
	return ost;
}


