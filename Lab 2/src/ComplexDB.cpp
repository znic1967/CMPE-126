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
	fin.open(file);
	if (fin.fail())
	{
		cout<<"File failed to open :("<<endl;
	}
	else
	{
		cout<<"File opened successfully!"<<endl;
	}
	string line;
	stringstream in;
	char real[5]="";
	char img[5]="";
	char buf[5]="";
	float r=0;
	int pos=0;
	int s=0;
	char c='a';
	//unsigned int i = 0;
	bool neg=false;
	bool flt=false;
	bool e=false;

	while (!fin.eof()){
		cout<<"Data In: "<<data[length];
		length++;
		getline(fin,line); //Get line of input
		in.str(line);
		cout<<"\nCurrent line: "<<line<<endl;
		 //get  first char of line.
		Complex num;
		while(!e){ //check for end of line
			cout<<"State: "<<s<<endl;
			switch(s){

			case 0: //i,-i
				in.get(c);
				if (c=='\0'){
					e=true;
				}
				if(c=='-')
				{
					neg=true;
					//don't step pos
					//cout<<"neg"<<endl;
				}
				if (c=='+') //==================================
				{
					if (flt) flt=false; //reset float
					if (neg)
						{
							data[length].setReal((atof(buf)*-1));
							neg=false;
						}
						else data[length].setReal(atof(buf));

				pos=0;
				strcpy(buf,""); //clear c-string
				}

				if (isdigit(c)) s=1;

				if (c=='.') //====================================
				{
					flt=true;
					s=2;
				}
				if (c=='i') //====================================
				{
					//cout<<"i ";
					if (flt) flt=false;
					if (neg)
					{
						data[length].setImaginary((atof(buf)*-1));
						neg=false; //reset neg bool
					}
					else data[length].setImaginary(atof(buf));
				}
				break;

			case 1: //a or bi

					//cout<<"c: "<<c;
					buf[pos]=c;
					//cout<<"Buffer: "<<buf<<endl;
					pos++;

				//cout<<buf<<endl;

				if(c=='+')
				{
					//cout<<"+";
					//cout<<"Buffer"<<buf<<endl;
				}
				s=0;
				break;
			case 2: //a.a
				buf[pos]=c;
				pos++;
				flt=true;
				s=0;
				break;
			}
		}
	}
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


