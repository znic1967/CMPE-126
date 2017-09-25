/*
 * StockDB.cpp
 *
 *  Created on: Sep 20, 2017
 *      Author: Lt_Ballzacki
 */

#include "Stock.h"
#include "StockDB.h"
#include <iostream>
#include <fstream>
using namespace std;

StockDB::StockDB(int max) {
	maxsize=max;
	size=0;
	data=new Stock[maxsize];
}

StockDB::~StockDB() {
	delete [] data;
}

void StockDB::getstocks(string file){
	ifstream fin;
	fin.open(file);
	if (fin.fail()){
		cout<<"File failed to open..."<<endl;
	}
	else{
		cout<<"File opened"<<endl;
	}

	string line;
	while(!fin.eof()){
		fin>>data[size].symbol>>data[size].cost>>data[size].shares;
		size++;
	}
}
void StockDB::printDB(){
	for (int i=0;i<size;i++){
		cout<<data[i]<<endl;
	}
}

void StockDB::ssort(){ //Selection Sort
	//cout<<size;
	Stock min;
	int smallest_index=0;
	for (int i=0; i <size; i++) {        // sort every target object from 0 to the end
		min=data[i];    // assume target one is the minimum
		smallest_index=i;        // remember who is current min
		for (int j=i+1; j<size; j++){
			if (data[j] < min) smallest_index=j;// new min is in m
		}
		swap(data[i],data[smallest_index]);
	}
}

void StockDB::bsort(){ //Bubble sort
	for (int target=0; target <size; target++) // sort every target object from 0 to the end
	{
		for (int i=size-1; i>target; i--)
		{
				if (data[i] < data[i-1]) // bubble up from the end to target
				{
					swap(data[i], data[i-1]);
				}
		}
	}
}

void StockDB::isort() {
	for (int old=0; old <size; old++) {        // take old one out from 0 to end
		for (int i=old; i >0; i--){
			if (data[i] < data[i-1])
			{
				swap(data[i], data[i-1]);  // old one bubbles to its proper place in new array
			}
		}
	}
}


void StockDB::swap(Stock &s1, Stock &s2){
	Stock temp;
	temp=s1;
	s1=s2;
	s2=temp;
}

