//============================================================================
// Name        : Lab.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include "Stack.h"
#include "Queue.h"
using namespace std;

int main() {
	ifstream fin;
	fin.open("palindrome.txt");
	if (fin.fail()) cout<<"File failed to open."<<endl;

	string line="";
	char sym='\0';
	Stack palStack;
	Queue palQueue;
	while(!fin.eof())
	{
		getline(fin,line);
		cout<<"Current Line: "<<line<<endl;
		for (unsigned int i=0; i<line.size(); i++)
		{
			sym=line[i];
			if (isalpha(sym))
			{
				sym=tolower(sym); //Converts everything to lowercase
				palStack.push(sym);
				palQueue.addQueue(sym);
			}
		}
		cout<<"Palindrome check..."<<endl;
		while (palStack.getTopIndex()==0) //While front=rear keep going
		{
			if (palStack.pop()==palQueue.getFrontChar())
			{
				palQueue.delQueue();
			}
			else break;
		}


	}
}
