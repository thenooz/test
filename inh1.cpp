#include<iostream>

using namespace std;
int a=15;
class base{
	int a;
	public: int b;
	base(int t){
		b=2*t; a=t*10;
	}
	void show(){
		cout<<b<<"\t"<<a;
	}
};

class der: public base{
	int c;
	public: int d;
	der(int f):base(f){
		c=20*f;d=30*b;
	}
	void show(){
		cout<<"c="<<c<<" and d="<<d;
	}
};
int main(){
	
	der q(10);
	q.show();//cout<<endl<<q.b<<endl;
	q.base::show();	
	return 0;
}
