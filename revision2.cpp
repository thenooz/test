#include<iostream>


using namespace std;

class test{
	private: int count;
	public: test(int a):count(a)
	{	}
	int display(){return count;
	}
	
	test operator ++(){
		++count; return test(count);
	}
};

int main()
{
	test c(0);
	test k=++c;
	cout<<c.display();
	cout<<endl<<k.display();
	

	return 0;
}
