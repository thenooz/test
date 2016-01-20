#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int func(int,int);
long fact(int );
void l()
{
	cout<<"Something";
}
int s;
int main()
{
	//s=-1;
	//cout.setf(ios::fixed);
	//cout<<setprecision(5)<<func(2,1);
	//cout<<func(45,21);
	
	return 0;
}
int func(int a,int b)
{	
	int c=a/b;
	int d=a-c*b;
	if(d==0)return b;
	int ans=func(b,d);
	return ans;
}
long fact(int r)
{
	if(r==1)return 1;
	return r*fact(r-1);
}
