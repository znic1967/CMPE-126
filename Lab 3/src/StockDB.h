//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 1 October 2017
// Description : Lab 3
//============================================================================

#ifndef STOCKDB_H_
#define STOCKDB_H_
#include "Stock.h"
#include "StockNode.h"

class StockDB
{
public:
    void load(string);
    void print_rev();
    StockNode* returnMiddle();
    void insert_back(StockNode *p);
    StockDB split(StockDB db2, StockNode* middle);
    //~StockDB();
    StockDB();
    friend ostream& operator<<(ostream& ost, StockDB& s);

    //Getters
    StockNode* getHead();
    StockNode* getTail();
private:
    StockNode* head;
    StockNode* tail;
    int length;
};
#endif /* STOCKDB_H_ */
