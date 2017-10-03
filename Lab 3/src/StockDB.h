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

class StockDB
{
public:
    void load(string);
    //void print();
    void print_rev();
    StockNode* returnMiddle();
    //void insert_front(StockNode *p);
    void insert_back(StockNode *p);
    void split (StockNode*);
    ~StockDB();
    StockDB();
    friend ostream& operator<<(ostream& ost, StockDB& s);
private:
    StockNode* head;
    StockNode* tail;
    int length;
};
#endif /* STOCKDB_H_ */
