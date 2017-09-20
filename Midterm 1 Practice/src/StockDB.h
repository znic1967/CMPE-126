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
	StockDB();
	virtual ~StockDB();
private:
	Stock *data;
};

#endif /* STOCKDB_H_ */
