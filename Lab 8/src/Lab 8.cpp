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
	int result=0;
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
		cin>>choice;
		//choice=5;
		cout<<"Your choice: "<<choice<<endl;

		if (choice==1)
		{
			if (!s.getLoaded()) s.load("ary"); //Load if data is not already in
			s.printData();
			cout<<"\nSpecify the element to be searched for: ";
			cin>>element;
			if (s.sequentialNoRecursion(element)) cout<<"Element found!"<<endl;
			else cout<<"Not in array."<<endl;
		}
		if (choice==2)
		{
			if (!s.getLoaded()) s.load("ary"); //Load if data is not already in
			s.printData();
			cout<<"\nSpecify the element to be searched for: ";
			cin>>element;
			//element=0;
			if(s.sequentialRecursion(s.getDataAry(), s.getLength()-1, element)) cout<<"Element found!"<<endl;
			else cout<<"Element not found."<<endl;
		}
		if (choice==3)
		{
			if (!s.getLoaded()) s.load("ary"); //Load if data is not already in
			s.sortData();
			cout<<"\nSorted Data: "; s.printData();
			cout<<"\nSpecify the element to be searched for: ";
			cin>>element;
			result=s.binarySearchNoRecursion(element, 0, s.getLength());
			if (result>0) cout<<"Found element: "<<element<<endl;
			else cout<<"Element not found."<<endl;
		}
		if (choice==4)
		{
			if (!s.getLoaded()) s.load("ary"); //Load if data is not already in
			s.sortData();
			cout<<"\nSorted Data: "; s.printData();
			cout<<"\nSpecify the element to be searched for: ";
			cin>>element;
			//element=44;
			result=s.binarySearchRecursion(element, 0, s.getLength());
			if (result>0) cout<<"Found element: "<<element<<endl;
			else cout<<"Element not found."<<endl;
		}
		if (choice==5)
		{
			if (!s.getListIn()) s.load("ll"); //Load if data is not already in
			cout<<"Data stored in linked list: "; s.printList();
			cout<<"\nSpecify the element to be searched for: ";
			cin>>element;
			result=s.linkedListNoRecursion(element);
			if (result>0) cout<<"Found element."<<endl;
			else cout<<"Element not found."<<endl;
		}
		if (choice==6)
		{
			if (!s.getListIn()) s.load("ll"); //Load if data is not already in
			cout<<"Data stored in linked list: "; s.printList();
			cout<<"\nSpecify the element to be searched for: ";
			cin>>element;
			result=s.linkedListRecursion(element, s.getHead());
			if (result>0) cout<<"Found element."<<endl;
			else cout<<"Element not found."<<endl;
		}
	 } while(choice!=0);
	 cout<<"Search program ended."<<endl;
}
