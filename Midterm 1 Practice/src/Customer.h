/*
 * Customer.h
 *
 *  Created on: Feb 9, 2014
 *      Author: FRANK
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <string>
using namespace std;

class Customer {
public:
	Customer(string last="", string first="");
	~Customer();
	Customer(const Customer &c);
	double	*idp;
	string	lname;

private:
	string  fname;
};

#endif /* CUSTOMER_H_ */
