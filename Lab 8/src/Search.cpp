/*
 * Search.cpp
 *
 *  Created on: Dec 8, 2017
 *      Author: Nicholson
 */

#include "Search.h"
#include <iostream>
#include <fstream>
using namespace std;

Search::Search()
{
	length=0;
	loaded=false;
	for (int i=0; i<50; i++)
	{
		data[i]=0;
	}
}
void Search::load()
{
	ifstream fin;
	fin.open("data.txt");
	if (fin.fail()) cout<<"File failed to open."<<endl;

	int num=0;

	while (fin>>num)
	{
		data[length]=num;
		length++;
	}
	loaded=true;
}

void Search::printData()
{
	cout<<"Data: ";
		for (int i=0; i<length; i++)
		{
			cout<<data[i]<<" ";
		}
}
bool Search::sequentialNoRecursion(int e)
{
	for (int i=0; i<length; i++)
	{
		if (data[i]==e) return true;
	}
	return false;
}

bool Search::sequentialRecursion(int ary[], int size, int e)
{
	if (size==0)
		return false;
	if (data[size]==e)
		{
			return true;
		}
	sequentialRecursion(data, size-1, e);
}

void Search::sortData()
{
	int min;
	for (int target=0; target <length; target++) {        // sort every target object from 0 to the end
		min=data[0];    // assume target one is the minimum
	    target        // remember who is current min
		for (int i=target; i<size; i++)
		{
			if (data[i] < min) min=data[i];    // new min is in m
			int temp=*data[i];
			data
		}
	}
}
void Search::setDataArray(int index, int content)
{
	data[index]=content;
}
int* Search::getDataAry()
{
	return data;
}
int Search::getLength()
{
	return length;
}

void Search::setLength(int l)
{
	length=l;
}
bool Search::getLoaded()
{
	return loaded;
}
