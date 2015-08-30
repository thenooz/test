#include<iostream>
#include<string>
#include<sstream>
using namespace std;


int large(int l[])
{
	int la=0;
	for(int i=0;i<sizeof(l);i++)
	{
		if(la<l[i])la=l[i];
	}
	return la;
}

int put(string s)
{
	stringstream ss(s);
	int a=s.length();int *size=new int[100],i=0,j,lar;char ch;
	while(ss)
	{
		ss>>size[i]>>ch;i++;
	}
	a=sizeof(size);
	
	for(i=1;i<a;i++)
	{
		if(size[0]>size[i])
		{
			size[0]+=size[i];
			for(j=i;j<a;j++)
			{
				size[j]=size[j+1];
			}
			//size[a]='\0';
			a--;i--;
		}
	}
	lar=large(size);
	//cout<<endl<<lar;
	for(i=0;i<a+1;i++)
	{
		cout<<size[i]<<" ";
	}
	
	return a;
}






int main()
{
	int a;string s;
	cin>>s;
	a=put(s);
//	cout<<endl<<a;
	return 0;
}
