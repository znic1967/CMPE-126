//============================================================================
// Name        : Lab.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include "Complex.h"

using namespace std;

int main() {
	ifstream fin;
	ofstream fout;
	fin.open("126import.txt");
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

	//Parser =============================
	int length=0;
	int pos=0;
	string input[50];
	string temp;
	char buffer[50]="";
	bool num=false;
	while (fin>>input[length])
	{
		temp=input[length];
		for (unsigned int i=0; i<temp.size(); i++)
		{
			//cout<<"Size: "<<temp.size();
			switch(temp[i])
			{
			case '-':
				//cout<<"Niggertive"<<endl;

				break;
			case '+':
				//cout<<"pos"<<endl;
				break;
			case 'i':
				if (num==true){
					//imaginary=ftoi(buffer);
				}
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				num=true;
				if(buffer[0]=='-')
				{
					buffer[1]=temp[0];
				}
				break;
			}
		}

	}

}
