#include<iostream>
#include<sstream>
using namespace std;

int *arr(int,int);
void mul(int *,int*);
void display(int*,int , int);
int *arr1,*arr2,*arr3;
int a,b,c,d;
int main()
{
	cout<<"Enter size of array1:";cin>>a>>b;
	cout<<"\nEnter size of array2:";cin>>c>>d;
	cout<<"Enter array1:";arr1=arr(a,b);
	cout<<"Enter array2:";arr2=arr(c,d);
	
	mul(arr1,arr2);
	display(arr3,a,d);
	
	return 0;
}
int * arr(int a,int b)
{
	int *t;
	t=new int[a*b];
	for(int i=0;i<a*b;i++)
	{
		cin>>*(t+i);
	}
	return t;
}

void mul(int *t1, int *t2)
{
	arr3=new int[a*d];
	int sum=0;
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<d;j++)
		{
			sum=0;
			for(int k=0;k<b;k++)
			{
				sum=sum+ *(t1+i*b+k)* *(t2+k*a+j);
			}
			*(arr3+i*d+j)=sum;
		}
	}
}
void display(int *ar, int a, int b)
{
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			cout<<*(ar+i*b+j)<<"\t";
		}
		cout<<endl;
	}
}
