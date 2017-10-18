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
Complex* ComplexDB::getData()
{
	return data;
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
			cout<<data[length]<<endl;
			length++;
		}
	}
}
Complex ComplexDB::largest(Complex num,int i)
{
	if (data[i]<data[i+1])
	{
		max=data[i+1];
	}
	if(i!=length)
	{
		largest(max,i+1); //If not reached end of array check next element
		cout<<"Element: "<<i;
	}
	return max;
}
void ComplexDB::add(){
	cout << "Enter Number: " << endl;
	char temp;
	float sign = 1;
	float ntemp = 1;
	float real = 0;
	float imag = 0;
	bool status = true;
	string line;

	if(length + 1 >= maxsize)
	{
		maxsize++;
		increase_size(maxsize);
	}

	while (status) {

		temp = cin.peek();
		if (temp == '+')
		{
			cin.ignore();
			temp = cin.peek();
		}
		else if (temp == '-')
		{
			cin.ignore();
			sign = -1.0;
			temp = cin.peek();
		}
		else if (isdigit(temp))
		{
			cin >> ntemp;
			temp = cin.peek();
			if (temp == '+' || temp == '-' || temp == '\n')
			{
				real = ntemp * sign;
				ntemp = 1;
				sign = 1;
			}
			else if (temp == 'i')
			{
				cin.ignore();
				imag = ntemp * sign;
				ntemp = 1;
				sign = 1;
			}
		}
		else
		{
			temp = cin.peek();
			getline(cin, line);
			if(temp == '\n')
			{
				data[length].setReal(real);
				data[length].setImaginary(imag);
				length++;
				status = false;
			}
			real = 0;
			imag = 0;
		}
	}

}
void ComplexDB::CDelete(){
	int index = 0;
	cout << "Enter the number to delete." << endl;
	for(int i = 0; i < length; i++){
		cout << i+1 << ": " << data[i] << endl;
	}
	cin >> index;

	index--;
	if(length == 0 || index < 0 || index >= length){
		cout << "Number could not be found. Please enter a different number" << endl;
	}
	else{
		for (int i = index; i < length - 1; i++) {
			data[i] = data[i+1];
		}
		length--;
	}
}
void ComplexDB::sort_items(){
	Complex temp;
	int smallest_index = 0;

	for(int i = 0; i < length - 1; i++){
		smallest_index = i;
		for(int j = i + 1; j < length; j++){
			if(data[j] < data[smallest_index]){
				smallest_index = j;
			}
		}
	temp = data[i];
	data[i] = data[smallest_index];
	data[smallest_index] = temp;
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


