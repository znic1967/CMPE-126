//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 9 October 2017
// Description : Lab 4
//============================================================================
#include <iostream>

#include "Portfolio.h"
#include "Stock.h"
#include "StockNode.h"
using namespace std;

int main() {
	Portfolio port;
	StockNode* mid;
	string file="stocks.txt";
	cout<<"Loading data..."<<endl;
	port.load(file); //Loads stocks from text file into linked list
	cout<<"\n=======Data Loaded======="<<endl;
	cout<<port;
	port.store();
	cout<<"Data stored..."<<endl;
	cout<<"======Reverse Print======="<<endl;
	cout<<"\nCalling function to find the middle of the linked list..."<<endl;
	//id=db.returnMiddle(); //Returns a pointer to the middle element
	cout<<"Splitting list..."<<endl;
	//db2=db.split(db2,mid); //Set db2 to a list returned from split
	cout<<"=======Left List======"<<endl;
	//cout<<db;
	cout<<"\n=======Right List======"<<endl;
	//cout<<db2;
}

//Console Output
/*
Loading data...
File opened.
File closed.

=======Data Loaded=======
-APPL	$22.00 /share	x44
-AMZN	$20.00 /share	x30
-G	$40.00 /share	x10
-MS	$12.00 /share	x45
-LX	$33.00 /share	x22
-DL	$12.00 /share	x28
-HP	$34.00 /share	x88
-MSI	$44.00 /share	x98
-MK	$35.00 /share	x56

Calling function to find the middle of the linked list...

Middle: -LX	$33.00 /share	x22
Position: 4

Splitting list...
=======Left List======
-APPL	$22.00 /share	x44
-AMZN	$20.00 /share	x30
-G	$40.00 /share	x10
-MS	$12.00 /share	x45
-LX	$33.00 /share	x22

=======Right List======
-DL	$12.00 /share	x28
-HP	$34.00 /share	x88
-MSI	$44.00 /share	x98
-MK	$35.00 /share	x56

 */
