#include<iostream>

using namespace std;
//int func(int);
int nod(int,int);
//int sum;
int main()
{
	int sum,k;
	cin>>sum;
	for(int i=0;i<sum;i++)
	{
		cin>>k;
		cout<<nod(k,k)<<endl;	
	}
	return 0;
}
int nod(int a,int b)
{
	if(a==0)return 0;
	int c=a%10;//cout<<a<<" "<<b<<" "<<c<<endl;
	if(c==0||b%c!=0)return nod(a/10,b);
	if(b%c==0)return (1+nod(a/10,b));
	//else return 0+nod(a/10,b);
}
