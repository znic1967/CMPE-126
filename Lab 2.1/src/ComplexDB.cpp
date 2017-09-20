
#include "Complex.h"
#include "ComplexDB.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <iomanip>
#include <cstdlib>
using namespace std;

ComplexDB::ComplexDB() {
	MAX_SIZE=20;
	length=0;
	data= new Complex[MAX_SIZE];
}

ComplexDB::ComplexDB(int max) {
	MAX_SIZE=max;
	length=0;
	data= new Complex[MAX_SIZE];
}

ComplexDB::~ComplexDB() {
	delete [] data;
}
void ComplexDB::increase_size(int newMaxSize){
	MAX_SIZE = newMaxSize;
	Complex *temp = new Complex[MAX_SIZE]; //create an Complex array.

	for(int i = 0; i < length; i++){ //Copy data from original ComplexDB to temp
		temp[i] = data[i];
	}

	delete [] data; //delete the old data

	Complex* data = new Complex[MAX_SIZE]; //recreate data array with updated max size.

	for(int i = 0; i < length; i++){ //copy temp data to new data array
		data[i] = temp[i];
	}

	delete [] temp;

}

void ComplexDB::load (string file)
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


	int s = 0;
	bool neg = false;
	int real=0, img=0;
	char ichar='\0';
	char temp;
	float sign=1;
	string line;
	bool status=true;

	while(fin>>line)
	{
		stringstream in;
		in.str(line);      // IMO, it is easier to deal with stream (versus string).  So, I convert Ln to in
		cout << "input:<" << line <<">\n";

		while (s<9)
		{
			switch(s)
			{
				case 0: //i,-i
					temp=in.peek();
					if (isdigit(temp)){
						s=1;
					}
					if (temp=='-')
					cout<<"Temp: "<<temp<<endl;
					//status=false;
					break;
				case 1: //r,i
					cout<<"case 1"<<endl;
					break;
				case 2:
					cout<<"case 2"<<endl;
					status=false;
					break;
			}

		}
	}
}
