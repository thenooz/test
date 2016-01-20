#include<iostream>
#include<math.h>
using namespace std;
void put(double,double);
//bool issq(long);
int main()
{
	int a,i;double *s,*d;
	cin>>a;
	s=new double[a];d=new double[a];
	for(i=0;i<a;i++)
	{
		cin>>s[i]>>d[i];
	}
	for(i=0;i<a;i++)
	{
		put(s[i],d[i]);cout<<endl;
	}
}
void put(double s,double d)
{
	s=sqrt(s);d=sqrt(d);
    int k=int(s),l=int(d);
    if(l>k){l=l-k;if(k==sqrt(s)*sqrt(s))l++;}
            else {l=k-l;if(l==sqrt(d)*sqrt(d))l++;}
    cout<<l;
}
