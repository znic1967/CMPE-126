#include <iostream>
#include <string>
using namespace std;
void pointertest()
{
	int *a = new int(5);
	int *b = a;
}

class Stock{

	public:
		string symbol;
		int cost;
		int shares;
		friend ostream& operator>> (istream&, Stock&);
		Stock(){
			symbol="$";
			cost=0;
			shares=0;
		}
		Stock(string s, int c,int sh){
			symbol=s;
			cost=c;
			shares=sh;
		}
	};

ostream& operator>> (istream& in, Stock& s){
		in>>s.symbol>>s.cost>>s.shares;
		return cout;
}
void iotest(){

	Stock s();
	cin>>s;

}
int main() {
	iotest();
}
