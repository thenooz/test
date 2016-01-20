#include<iostream>
#include<string>
using namespace std;					//Incomplete program
char * findsol(char *);
int main()
{
	int a,b,c;char k[11],*l;
	cin>>k;
	l=findsol(k);
	//cout<<l;
	
	
	return 0;
}
char *findsol(char *o)
{
	char *t;
	for(int i=0;i<10;i++)
	{
		if(o[i]=='w')t[i]='+';
		else t[i]='-';
	}
	return t;
}
