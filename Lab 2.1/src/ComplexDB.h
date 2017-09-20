
#ifndef COMPLEXDB_H_
#define COMPLEXDB_H_

class ComplexDB:public Complex
{
public:
	ComplexDB();
	ComplexDB(int max);
	void load (string file);
	void increase_size(int newMaxSize);
	void add(Complex num);
	void print(int n);
	void printall();
	friend ostream& operator <<(ostream& ost, const ComplexDB &c);
	virtual ~ComplexDB();
private:
	Complex *data;
	int length;
	int MAX_SIZE;
};

#endif /* COMPLEXDB_H_ */
