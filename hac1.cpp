#include<iostream>
#include<limits.h>
#include<math.h>

using namespace std;


int mag(int d)
{
	if(d<0)return -1*d;
	else return d;
}
unsigned int sum;
void flip(unsigned int i,int j)
{
	if(j==0){
		//if(i%2)sum=sum+pow(2,j)*0;
		//else sum=sum+pow(2,j)*1;
		
		return;
	}
	flip(i/2,j-1);
	if(i%2)sum=sum+pow(2,32-j)*0;
	else sum=sum+pow(2,32-j)*1;
}

int main()
{
	unsigned int b;int a;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		sum=0;
		cin>>b;
		flip(b,32);
		cout<<sum<<endl;
	}
	
	return 0;
}
