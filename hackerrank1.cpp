#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	/*string a,b;char temp;
	cin>>a;cin>>b;
	cout<<a.length()<<" "<<b.length();
	cout<<endl<<a<<b;
	temp=a[0];
	a[0]=b[0];
	b[0]=temp;
	cout<<'\n'<<a<<" "<<b;
	return 0;*/
	string a;int len;char ch;
	cin>>a;
	
	stringstream ss(a);
	while(ss)
	{
		ss>>len>>ch;
		cout<<"\n"<<len;
	}
	
}
