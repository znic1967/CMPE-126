//============================================================================
// Name        : Lab.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <cstring>
#include "Complex.h"
#include "ComplexDB.h"

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
	ComplexDB db;
	int pos;
	string input[50];
	string line;
	float itmp=0;
	float rtmp=0;
	char buffer[50]="";
	bool num=false; //booleans reflect state in previous loop cycle
	bool rin=false;
	bool iin=false;
	bool flt=false;
	bool neg=false;
	bool newline=false;
	while (!fin.eof())
	{
		rtmp=0;
		itmp=0;
		getline(fin,line);
		for (unsigned int i=0; i<line.size(); i++)
		{
			cout<<line[i]<<" ";
			if (line[i]=='\n'){
				cout<<"Newline";
			}
			pos=0;
			//cout<<"Size: "<<line.size();
			switch(line[i])
			{
			case '-':
				if (num==true)
				{
					rin=true;
					rtmp=atof(buffer); //Real value locked in.
					num=false;
					strcpy(buffer,""); //Clear buffer
					pos=0;
				}
				buffer[pos]=line[i];

				break;
			case '+':
				//cout<<"Case: Plus."<<endl;
				if (num==true) //If the last loop value was a number
				{
					rin=true;
					rtmp=atof(buffer); //Real value locked in.
					//cout<<rtmp<<endl;
					num=false;
					strcpy(buffer,""); //Clear buffer
					pos=0;
					//cout<<"Buffer: "<<buffer<<endl;
				}
				break;
			case 'i':
				//cout<<"Case: i"<<endl;
				if (num==true)
				{
					itmp=atof(buffer);
					num=false;
					strcpy(buffer,""); //Clear buffer
					pos=0;
					Complex num(rtmp,itmp);
					db.add(num); // Add complex number to database;
				}
				break;
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '\n':
				//cout<<"Newline!"<<endl;

				break;
			case '9':
				//cout<<"Case: Number"<<endl;
				num=true;
				buffer[pos]=line[i];
				//cout<<"Buffer: "<<buffer<<endl;
				if(neg==true)
				{

				}
				break;
			case '.':
				if (num==true)
				{
					buffer[pos]=line[i];
					num=false;
					flt=true;
				}
			}
			db.print(0);
			pos++;
		}

	}

}
