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
	int pos=0;
	string input[50];
	string line;
	float itmp=0;
	float rtmp=0;
	char buffer[50]="";
	bool num=false; //booleans reflect state in previous loop cycle
	bool rin=false;
	bool iin=false;
	bool flt=false;
	bool ineg=false;
	bool newline=false;
	while (!fin.eof())
	{
		rtmp=0;
		itmp=0;
		rin=false;
		iin=false;
//		strcpy(buffer,""); //Clear buffer
//		num=0;
//		pos=0;
		getline(fin,line);
		cout<<"Line: "<<line<<endl;
		cout<<"buffer: "<<buffer<<endl;
		cout<<"num "<<num<<endl;
		cout<<"pos "<<pos<<endl;
		cout<<"rin"<<rin<<endl;
		for (unsigned int i=0; i<line.size(); i++)
		{

			switch(line[i])
			{
			case '.':
				if (num==true)
				{
					//cout<<"?";
					buffer[pos]=line[i];
					num=false;
					flt=true;
					pos++;
					//cout<<"buffer point"<<buffer;
				}
				break;
			case '-':
				cout<<"neg"<<endl;
				if (num==true) //Previous number in imaginary must be negative
				{
					rtmp=atof(buffer); //Real value locked in.
					rin=true;
					num=false;
					strcpy(buffer,""); //Clear buffer
					pos=0;
					if (rin==true)
					{
						buffer[pos]=line[i];
						pos++;
						rin=false;
					}
				}
				else
				{
					//cout<<"1";
					//cout<<"buffer-: "<<buffer<<endl;
					buffer[pos]=line[i];
					pos++;
				}

				break;
			case '+':
				//cout<<"Case: Plus."<<endl;
				if (num==true) //If the last loop value was a number
				{
					rtmp=atof(buffer); //Real value locked in.
					rin=true;
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

					cout<<"Current Data: "<<db<<endl;
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
			case '9':
				cout<<"Case: Number"<<endl;

				//cout<<"Buffer: "<<buffer<<endl;
				if(flt==true)
				{
					buffer[pos]=line[i];
					flt=false;
					num=true;
				}
				else
				{
					num=true;
					buffer[pos]=line[i];
					pos++;oiiiiiiiiiiiiiii988888888888888888888888888888888888888888888888888888888888
				}


				if (i==line.size()-1 &&rin==false)
				{
					//cout<<"just real";
					cout<<"buffer: "<<buffer;
					rtmp=atof(buffer);
					//cout<<"rtmp: "<<rtmp<<endl;
					Complex num(rtmp,itmp);
					db.add(num); // Add complex number to database;
					db.print(0);
				}
				break;
			}
		}

	}

}
