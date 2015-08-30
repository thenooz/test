#include<iostream>
using namespace std;
//int lar(int,int,int,int);
int main()
{
	int a,b,c,*d,sum=1;;
	cin>>a;
	d=new int[a];
	for(c=0;c<a;c++)
	{
		cin>>d[c];
	}
	for(c=0;c<a;c++)
	{
		sum=1;
		for(b=0;b<d[c];b++)
		{
			if(b%2==0)sum=(2*sum);
			else sum++;
		}
		cout<<sum<<endl;
	}
	//cout<<a;
	return 0;
}

