/*
 * ComplexDB.cpp
 *
 *  Created on: Sep 17, 2017
 *      Author: Lt_Ballzacki
 */

#include "Complex.h"
#include "ComplexDB.h"
#include <iostream>
#include <fstream>
using namespace std;

ComplexDB::ComplexDB() {
	MAX_SIZE=20;
	length=0;
	data= new Complex[MAX_SIZE];
}

ComplexDB::ComplexDB(int max) {
	MAX_SIZE=max;
	length=0;
	data= new Complex[MAX_SIZE];
}

ComplexDB::~ComplexDB() {
	delete [] data;
}
void ComplexDB::increase_size(int newMaxSize){
	MAX_SIZE = newMaxSize;
	Complex *temp = new Complex[MAX_SIZE]; //create an Complex array.

	for(int i = 0; i < length; i++){ //Copy data from original ComplexDB to temp
		temp[i] = data[i];
	}

	delete [] data; //delete the old data

	Complex* data = new Complex[MAX_SIZE]; //recreate data array with updated max size.

	for(int i = 0; i < length; i++){ //copy temp data to new data array
		data[i] = temp[i];
	}

	delete [] temp;

}

void ComplexDB::load (string file)
{
	ifstream fin;
	fin.open(file);
	if (fin.fail())
	{
		cout<<"File failed to open :("<<endl;
	}
	else
	{
		cout<<"File opened successfully!"<<endl;
	}

}
