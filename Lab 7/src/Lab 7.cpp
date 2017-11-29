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
		while (palStack.getTopIndex()!=0)
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
}

//Console Output
/*
Current Line: Anna
Yes
Current Line: Racecar
Yes
Current Line: Sentences
No
Current Line: Anne, I  vote more cars race Rome to Vienna.
Yes
Current Line: Are Mac ‘n’ Oliver ever evil on camera?
Yes
Current Line: Are we not drawn onward to new era?
Yes
Current Line: Are we not drawn onward, we few, drawn onward to new era?
Yes
Current Line: Are we not pure? “No sir!” Panama’s moody Noriega brags. “It is garbage!”
No
Current Line: Irony dooms a man; a prisoner up to new era.
No
Current Line: Art, name no tub time. Emit but one mantra.
Yes
Current Line: A  man, a plan, a canal: Panama!
Yes
 */
