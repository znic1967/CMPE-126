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
    void insert_front(StockNode *p);
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
