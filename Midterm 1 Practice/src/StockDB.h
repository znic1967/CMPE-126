/*
 * StockDB.h
 *
 *  Created on: Sep 20, 2017
 *      Author: Lt_Ballzacki
 */

#ifndef STOCKDB_H_
#define STOCKDB_H_

#include "Stock.h"
class StockDB {
public:
	StockDB(int max);
	void getstocks(string file);
	void printDB();
	void sort();
	virtual ~StockDB();
private:
	Stock *data;
	int maxsize;
	int size;
};

#endif /* STOCKDB_H_ */
