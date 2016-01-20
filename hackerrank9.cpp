#include<iostream>
#include<math.h>
using namespace std;
bool ps(int);
int func(int,int);
int main()
{
	int l,j,k;
	cin>>l;
	for(int i=0;i<l;i++)
	{
		cin>>j>>k;
		cout<<func(j,k)<<endl;
	}
	return 0;
}
int func(int a,int b)
{
	if((ps(a)&&ps(b))||(ps(a)&&(!ps(b))))
	{
		return (int)sqrt(b)-(int)sqrt(a)+1;
	}
	else
	{
		return (int)sqrt(b)-(int)sqrt(a);
	}
}
bool ps(int a)
{
	if(sqrt(float(a))*sqrt(float(a))==a)return true;
	else return false;
}
