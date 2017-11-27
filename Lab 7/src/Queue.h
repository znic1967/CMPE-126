/*
 * Queue.h
 *
 *  Created on: Nov 15, 2017
 *      Author: Nicholson
 */

#ifndef QUEUE_H_
#define QUEUE_H_

class Queue {
public:
	Queue();
	void addQueue(char c);
	void delQueue();
	~Queue();

	//Getters
	char getFrontChar();
private:
	int maxsize, front, back, count;
	char* list;
};

#endif /* QUEUE_H_ */
