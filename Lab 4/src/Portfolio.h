//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 1 October 2017
// Description : Lab 3
//============================================================================
#ifndef Portfolio_H_
#define Portfolio_H_

#include "Stock.h"
#include "StockNode.h"

class Portfolio
{
public:
    Portfolio();
    void load(string);
    void store();
    void reversePrint();
    StockNode* returnMiddle();
    void insert_back(StockNode *p);
    Portfolio split(Portfolio db2, StockNode* middle);
    //Getters
    StockNode* getHead();
    StockNode* getTail();
    //Operators
    friend ostream& operator<<(ostream& ost, Portfolio& s);
private:
    StockNode* head;
    StockNode* tail;
    int length;
};
#endif /* Portfolio_H_ */
