#include<iostream>
#include<math.h>
using namespace std;
void put(long,long);
//bool issq(long);
int main()
{
	int a,i;long *s,*d;
	cin>>a;
	s=new long[a];d=new long[a];
	for(i=0;i<a;i++)
	{
		cin>>s[i]>>d[i];
	}
	for(i=0;i<a;i++)
	{
		put(s[i],d[i]);
	}
}
void put(long s,long d)
{
	int count=0;long i;
	i=(sqrt(d))-(sqrt(s));
	if(s==sqrt(s)*sqrt(s))i++;if(d==sqrt(d)*sqrt(d))i++;
	cout<<i<<endl;
}
