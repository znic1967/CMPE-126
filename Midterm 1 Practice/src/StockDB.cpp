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

void StockDB::sort(){
	cout<<size;
	Stock temp;
	int smallest_index=0;
	for (int i=0; i <size; i++) {        // sort every target object from 0 to the end
		Stock min=data[i];    // assume target one is the minimum
		smallest_index=i;        // remember who is current min
		for (int j=i+1; j<size; j++){
			if (data[j] < min) smallest_index=j;// new min is in m
		}
		temp = data[i];
		data[i] = data[smallest_index];
		data[smallest_index] = temp;
	}
}



