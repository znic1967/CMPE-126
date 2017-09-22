//============================================================================
// Name        : Lab.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <cstring>
#include "Complex.h"
#include "ComplexDB.h"

using namespace std;

int main() {
	ComplexDB db;
	string file="126import.txt";
	db.load(file);
	//cout<<db;

}
