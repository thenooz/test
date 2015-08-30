#include<iostream>
using namespace std;
int main()
{
	int *a[1];   int *q;
/*	q=new int;    
	*q=22;
	*(q+1)=12;
	cout<<q[1];*/
	*(a+0)=new int[6];    
	**a=22;	
	cout<<**a<<" "<<*(a+2)<<" "<<a[2];
	cout<<*a[2]<<endl;		            
	*(*a+2)=27;      // means a[0][2]
	a[10]=new int[10];a[10][8]=17;
	a[10][0]=213;
	cout<<a[0][0]<<'\t'<<a[0][2]<<'\t'<<a[10][0]<<" "<<a[10][8]<<" "<<a[0]<<" "<<a[10];

	
	return 0;
}
