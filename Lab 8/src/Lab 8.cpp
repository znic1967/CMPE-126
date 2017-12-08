//============================================================================
// Name        : Lab.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int i=7;
	 do {
	        cout<<"\nChoose your search type:";
	        cout<<"\n1. Arrays: Sequential Search without recursion";
	        cout<<"\n2. Arrays: Sequential Search with recursion";
	        cout<<"\n3. Ordered Arrays: Binary Search without recursion";
	        cout<<"\n4. Ordered Arrays: Binary Search with recursion";
	        cout<<"\n5. Linked List: Search without recursion";
	        cout<<"\n6. Linked List: Search with recursion";
	        cout<<"\nEnter 0 to exit.\nYour choice: ";
	        cout<<"\nSpecify the element to be searched for: ";
	 } while(i!=0);
}
