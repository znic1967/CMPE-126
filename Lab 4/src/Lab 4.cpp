//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 12 October 2017
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
	Stock temp;
	Stock stk ("FB", 44,78);
	Stock stk2 ("EA", 47,22);
	Stock stk3 ("IO",98,3);
	string file="stocks.txt";
	cout<<"Loading data..."<<endl;
	port.load(file); //Loads stocks from text file into linked list
	cout<<"\n=======Data Loaded======="<<endl;
	cout<<port;
	port.store();
	cout<<"Data stored..."<<endl;
	cout<<"\n======Reverse Print======="<<endl;
	port.reversePrint();
	cout<<"\n======Insert Front========"<<endl;
	cout<<"Inserting stock: "<<stk<<"to front of list"<<endl;
	port.insert_front(stk);
	cout<<"New List..."<<endl;
	cout<<port;
	cout<<"\n======Inserting Middle======"<<endl;
	cout<<"Inserting stock: "<<stk2<<"into middle of list"<<endl;
	mid=port.returnMiddle();
	port.insert_middle(mid,stk2);
	cout<<"New List..."<<endl;
	cout<<port;
	cout<<"\n======Insert End======"<<endl;
	cout<<"Inserting stock: "<<stk3<<"to end of list"<<endl;
	port.insert_end(stk3);
	cout<<"New List..."<<endl;
	cout<<port;
	cout<<"\n======Reverse Print======"<<endl;
	port.reversePrint();
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
Data stored...

======Reverse Print=======
-MK	$35.00 /share	x56
-MSI	$44.00 /share	x98
-HP	$34.00 /share	x88
-DL	$12.00 /share	x28
-LX	$33.00 /share	x22
-MS	$12.00 /share	x45
-G	$40.00 /share	x10
-AMZN	$20.00 /share	x30
-APPL	$22.00 /share	x44

======Insert Front========
Inserting stock: -FB	$44.00 /share	x78
to front of list
New List...
-FB	$44.00 /share	x78
-APPL	$22.00 /share	x44
-AMZN	$20.00 /share	x30
-G	$40.00 /share	x10
-MS	$12.00 /share	x45
-LX	$33.00 /share	x22
-DL	$12.00 /share	x28
-HP	$34.00 /share	x88
-MSI	$44.00 /share	x98
-MK	$35.00 /share	x56

======Inserting Middle======
Inserting stock: -EA	$47.00 /share	x22
into middle of list

Middle: -LX	$33.00 /share	x22
Position: 5

New List...
-FB	$44.00 /share	x78
-APPL	$22.00 /share	x44
-AMZN	$20.00 /share	x30
-G	$40.00 /share	x10
-MS	$12.00 /share	x45
-LX	$33.00 /share	x22
-EA	$47.00 /share	x22
-DL	$12.00 /share	x28
-HP	$34.00 /share	x88
-MSI	$44.00 /share	x98
-MK	$35.00 /share	x56

======Insert End======
Inserting stock: -IO	$98.00 /share	x3
to end of list
New List...
-FB	$44.00 /share	x78
-APPL	$22.00 /share	x44
-AMZN	$20.00 /share	x30
-G	$40.00 /share	x10
-MS	$12.00 /share	x45
-LX	$33.00 /share	x22
-EA	$47.00 /share	x22
-DL	$12.00 /share	x28
-HP	$34.00 /share	x88
-MSI	$44.00 /share	x98
-MK	$35.00 /share	x56
-IO	$98.00 /share	x3

======Reverse Print======
-IO	$98.00 /share	x3
-MK	$35.00 /share	x56
-MSI	$44.00 /share	x98
-HP	$34.00 /share	x88
-DL	$12.00 /share	x28
-EA	$47.00 /share	x22
-LX	$33.00 /share	x22
-MS	$12.00 /share	x45
-G	$40.00 /share	x10
-AMZN	$20.00 /share	x30
-APPL	$22.00 /share	x44
-FB	$44.00 /share	x78
*/
 */
