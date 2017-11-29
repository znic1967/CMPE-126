//============================================================================
// Name        : Zack Nicholson
// Professor   : Frank Lin
// Class       : CMPE 126-05
// Date        : 29 November 2017
// Description : Lab 7
//============================================================================
#ifndef QUEUE_H_
#define QUEUE_H_

class Queue {
public:
	Queue();
	void addQueue(char c);
	void delQueue();
	~Queue();
	void print();
	void clear();
	//Getters
	char getFrontChar();
private:
	int maxsize, front, back, count;
	char* list;
};

#endif /* QUEUE_H_ */
