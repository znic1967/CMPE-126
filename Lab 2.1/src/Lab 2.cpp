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

int main()
{
	string inputFile="126import.txt";
	ComplexDB data(20);
	int choice=0;
	cout<<"Welcome to complex number program."<<endl;

	while (choice!=6)
	{
		cout<<"\n============Menu============"<<endl;
		cout<<"(1) Load Complex Number Database."<<endl;
		cout<<"(2) Add"<<endl;
		cout<<"(3) Delete number."<<endl;
		cout<<"(4) List Numbers."<<endl;
		cout<<"(5) Save."<<endl;
		cout<<"(6) Quit."<<endl;
		cout<<"\nEnter the number of your choice: ";
		cin>>choice;
		if (choice==1)
		{
			data.load("126import.txt");
		}
	}
	cout<<"Thank you for using Nicholson Code!"<<endl;
}
