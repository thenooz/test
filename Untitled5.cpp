#include<iostream>

using namespace std;

void swap(int *,int *);

int main()
{
	int a=0,b=0,c=29,mid=1;
	int l[30]={2,0,0,1,1,2,0,2,1,0,0,1,1,1,2,0,2,2,2,2,1,1,1,0,0,0,0,1,1,1};
	while(b<=c)
	{
		if(l[b]<mid)
		{
			swap(l+a,l+b);
			a++;b++;
		}
		else if(l[b]>mid)
		{
			swap(l+b,l+c);
			c--;
		}
		else
		b++;
	}
	for(int i=0;i<30;i++)
	cout<<l[i]<<" ";
}
void swap(int *a, int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
