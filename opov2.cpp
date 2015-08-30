#include<iostream>

using namespace std;

class test{
	int a;
	
	public: int display(){
		return a;
	}
	test(int w):a(w){	}
	
	test operator + (test b){
		int s=a+b.a;
		return test(s);
	}
	
	test operator +(int y){
		int s=a+y;
		return test(s);
	}
};
int main()
{
	test obj1(20),obj2(11);
	cout<<(obj1+obj2).display();
	
	cout<<endl<<(obj2+13).display();
	
	return 0;
}
