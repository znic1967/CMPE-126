/*
 * Customer.cpp
 *
 *  Created on: Feb 9, 2014
 *      Author: FRANK
 */

#include "Customer.h"

Customer::Customer(string last, string first) {
	lname = last;
	fname = first;
	idp = new double(123);
}

Customer::Customer(const Customer &c){
	Customer temp;
	lname=c.lname;
	fname=c.fname;
	idp=*c.idp;

}


Customer::~Customer(){
	delete idp;
}
