/*
 * StockDB.h
 *
 *  Created on: Sep 20, 2017
 *      Author: Lt_Ballzacki
 */

#ifndef STOCKDB_H_
#define STOCKDB_H_
#include "Stock.h"

class StockDB
{
public:
    void load(string);
    //void print();
    void print_rev();
    void insert_front(StockNode *);
    void insert_inorder(StockNode *);
    void insert_inorder2pt(StockNode *);
    ~StockDB();
    StockDB();
    friend ostream& operator<<(ostream& ost, StockDB& s);
private:
    StockNode* head;
    StockNode* tail;
    int length;
};
#endif /* STOCKDB_H_ */
