#include<iostream>
#include<cstdlib>
using namespace std;


class st{
	string n;
	int a;
	public: 
	st()
	{
		n="Def";
		a=0;
	}
	st(string name,int age)
	{
		this->a=age;
		this->n=name;
	}
};
/*class ex:public exception{
int speed;
public:
	 const char* what()
	 {
	 	return "What the hell?";
	 }
	 void get()
	 {
	 	cout<<"Speed:"<<speed<<endl;
	 }
	 void set(int s)
	 {
	 	this->speed=s;
	 }

};*/

int main()
{
	
	try{
		throw 28;
	}
	catch(const char * a)
	{
		cout<<a;
	}
	catch(int l)
	{
		cout<<l;
	}
	catch(double k)
	{
		cout<<k;
	}
	/*ex c;int sp=250;
	try{if(sp>100)
	{
		c.set(sp);
		throw c;
	}
	
	}catch(ex f)
	{
		cout<<f.what()<<endl;
		f.get();
	}*/
	
	
	
	return 0;
}
