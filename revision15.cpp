#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
	int a=10,b=2,c;
	try{
		if(b==0)
		throw runtime_error("divide by zero error");
		else if(b==1) throw 20;
		
		c=a/b;
		throw 21;
		
		cout<<c<<endl;
		
	}
	catch(runtime_error &error)
	{
		cout<<"Exception:"<<error.what();
	}
	catch(int a)
	{
		cout<<a;
	}
	
	catch(...)
	{
		cout<<"Some exception occured";
	}
	cout<<"\nException handled";
	
	return 0;
}
