
#ifndef COMPLEXDB_H_
#define COMPLEXDB_H_

class ComplexDB:public Complex
{
public:
	ComplexDB();
	void add(Complex num);
	void print(int n);
	void printall();
	friend ostream& operator <<(ostream& ost, const ComplexDB &c);
	virtual ~ComplexDB();
private:
	Complex numbers[50];
	int length;
};

#endif /* COMPLEXDB_H_ */
