//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 10 December 2017
// Description : Lab 8
//============================================================================
#include <iostream>
#include "Search.h"
using namespace std;

int main() {
	int choice=7;
	int element=0;
	Search s;
	do {
		cout<<"\nChoose your search type:";
		cout<<"\n1. Arrays: Sequential Search without recursion";
		cout<<"\n2. Arrays: Sequential Search with recursion";
		cout<<"\n3. Ordered Arrays: Binary Search without recursion";
		cout<<"\n4. Ordered Arrays: Binary Search with recursion";
		cout<<"\n5. Linked List: Search without recursion";
		cout<<"\n6. Linked List: Search with recursion";
		cout<<"\nEnter 0 to exit.";
		cout<<"\nYour choice: ";
		cin>>choice;

		if (choice==1)
		{
			s.clear();
			s.load("ary"); //Load if data is not already in
			cout<<"Data: "; s.printData();
			cout<<"\nSpecify the element to be searched for: ";
			cin>>element;
			if (s.sequentialNoRecursion(element)) cout<<"Element found!"<<endl;
			else cout<<"Not in array."<<endl;
		}
		if (choice==2)
		{
			s.clear();
			s.load("ary"); //Load if data is not already in
			cout<<"Data: "; s.printData();
			cout<<"\nSpecify the element to be searched for: ";
			cin>>element;
			if(s.sequentialRecursion(s.getDataAry(), s.getLength()-1, element)) cout<<"Element found!"<<endl;
			else cout<<"Element not found."<<endl;
		}
		if (choice==3)
		{
			s.clear();
			s.load("ary"); //Load if data is not already in
			s.sortData();
			cout<<"\nSorted Data: "; s.printData();
			cout<<"\nSpecify the element to be searched for: ";
			cin>>element;
			if(s.binarySearchNoRecursion(element, 0, s.getLength())) cout<<"Found element."<<endl;
			else cout<<"Element not found."<<endl;
		}
		if (choice==4)
		{
			s.clear();
			s.load("ary"); //Load if data is not already in
			s.sortData();
			cout<<"\nSorted Data: "; s.printData();
			cout<<"\nSpecify the element to be searched for: ";
			cin>>element;
			if(s.binarySearchRecursion(element, 0, s.getLength())) cout<<"Found element."<<endl;
			else cout<<"Element not found."<<endl;
		}
		if (choice==5)
		{
			s.clear();
			s.load("ll"); //Load if data is not already in
			cout<<"Data stored in linked list: "; s.printList();
			cout<<"\nSpecify the element to be searched for: ";
			cin>>element;
			if(s.linkedListNoRecursion(element)) cout<<"Found element."<<endl;
			else cout<<"Element not found."<<endl;
		}
		if (choice==6)
		{
			s.clear();
			s.load("ll"); //Load if data is not already in
			cout<<"Data stored in linked list: "; s.printList();
			cout<<"\nSpecify the element to be searched for: ";
			cin>>element;
			if(s.linkedListRecursion(element, s.getHead())) cout<<"Found element."<<endl;
			else cout<<"Element not found."<<endl;
		}
	 } while(choice!=0);
	 cout<<"Search program ended."<<endl;
}
