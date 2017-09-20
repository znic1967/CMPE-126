#include <iostream>
#include <string>
#include "Stock.h"
#include "StockDB.h"
using namespace std;
void pointertest()
{
	//int *a = new int(5);
	//int *b = a;
}

void iotest(){

	Stock s();
	//cin>>s;

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
	db.sort();
	cout<<"Sorted"<<endl;
	db.printDB();
}
int main() {
	//iotest();
	//five();
	six();
}
