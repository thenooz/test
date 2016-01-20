#include<iostream>
using namespace std;

int main()
{
	int **p;
	p=new int *;
	*p=new int[5];
	**p=20;
	*(p+1)=new int[1];
	*p[1]=21;
	
	
	cout<<p[0][0]<<" "<<p[1][0];
	
	
	
	return 0;
}
