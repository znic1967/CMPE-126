//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 22 October 2017
// Description : Lab 5
//============================================================================
#ifndef STOCKDB_H_
#define STOCKDB_H_

#include "Stock.h"
#include "StockNode.h"

class StockDB
{
public:
    StockDB();
    void load(string);
    void print_rev();
    StockNode* returnMiddle();
    void insert_back(StockNode *p);
    StockDB split(StockDB db2, StockNode* middle);
    void reversePrint(StockNode* stk);
    //Getters
    StockNode* getHead();
    StockNode* getTail();
    //Operators
    friend ostream& operator<<(ostream& ost, StockDB& s);
private:
    StockNode* head;
    StockNode* tail;
    int length;
};
#endif /* STOCKDB_H_ */
