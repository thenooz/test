#include<iostream>
using namespace std;
void put(long b);
int main()
{
	int a;long double*b;int i;
	cin>>a;
	b=new long double[a];
	for(i=0;i<a;i++)
	{
		cin>>b[i];
	}
	for(i=0;i<a;i++)
	{
		put(b[i]);
	}
	return 0;
}
void put(long b)
{
	int count=0;long temp,l;
	temp=b;
	while(temp>10)
	{
		l=temp%10;
		if(b%l==0)
		{
			count++;
		}
		temp/=10;while(temp%10==0)temp/=10;
	}
	if(b%temp==0)count++;
	cout<<count<<endl;
}
