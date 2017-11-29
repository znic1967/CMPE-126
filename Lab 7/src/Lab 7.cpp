//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 29 November 2017
// Description : Lab 7
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
		palStack.clear(); //reset stack
		palQueue.clear(); //reset queue
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
		//cout<<"Stack: "; palStack.print(); cout<<endl;
		//cout<<"Queue: "; palQueue.print(); cout<<endl;
		//cout<<"Palindrome check..."<<endl;
		while (palStack.getTopIndex()!=0) //While front=rear keep going
		{
			char rear=palStack.pop();
			char front=palQueue.getFrontChar();
			if (front==rear)
			{
				palQueue.delQueue();
			}
			else break;
		}
		if (palStack.isEmpty())
		{
			cout<<"Yes"<<endl;
		}
		else cout<<"No"<<endl;
	}
	cout<<"End"<<endl;

}
