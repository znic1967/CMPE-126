#include <iostream>
#include <string>
#include <fstream>
#include "Stock.h"
#include "StockDB.h"
using namespace std;
void eight()
{
	int *d = new int[5];
	for (int i=0;i<5;i++){
		d[i]=i;
	}
	cout<<d<<endl;  //d is a pointer which is just an address
	cout<<d+1<<endl; //second element address
	cout<<d+4<<endl;
	cout<<&d[1]<<endl; //address of d[1]
	cout<<&d+4<<endl;
	cout<<d++<<endl;
	//int *b = a;
}
ostream& operator>> (istream& ist, Stock& s){ //Cannot be put in class cpp file due to implicit this pointer. Fine in main. Only works cuz variables are public.
		ist>>s.symbol>>s.cost>>s.shares;
		return cout;
	}
void iotest(){

	Stock s("@",1,2); //Needs to be explicit doesn't work with default constructor

	cout<<"Enter data: ";
	cin>>s<<s;


}
void five(){
	Stock frank("#",1,2);
	Stock obama("$",3,4);
	cout<<"Frank: "<<frank<<endl;
	cout<<"Obama: "<<obama<<endl;
	//frank=obama;
	cout<<"Frank=obama: "<<frank<<endl;
	cout<<(frank<obama);
}
void six(){
	StockDB db(10);
	db.getstocks("stocks.txt");
	cout<<"Starting DB"<<endl;
	db.printDB();
	db.ssort();
	cout<<"Sorted"<<endl;
	db.printDB();
}
void nine(){
	int *p; //Line 1
	int *q; //Line 2
	p = new int; //Line 3
	*p = 43; //Line 4
	cout<<*p<<endl;
	q = p; //Line 5
	*q = 52; //Line 6
	cout<<*q<<endl;
	delete q; //Line 7
	cout << *p << " " << *q << endl; //Line 8
}
void deepcopy(){
	int *p;
	p=new int;
	*p=87;
	int *first;
	int *second;
	first=new int[10];
	second=first; //Shallow copy

	delete [] second; //Creates dangling pointer

	second=new int[10];

	for (int i=0;i<10;i++){ //Deep copy 2 or more pointers have their own data.
		second[i]=first[i];
	}

	//=================

}
int main() {
	iotest();
	//five();
	//six();
	//eight();
	//nine();
	//deepcopy();
}
