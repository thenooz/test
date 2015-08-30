#include<iostream>
using namespace std;
void selsort(int m[],int);
void bubsort(int k[],int);
void insort(int h[],int);


int main()
{
	int a,i;
	cin>>a;
	int *w=new int[a];
	for(i=0;i<a;i++)
	{
		cin>>w[i];
	}
	//selsort(w,a);
	//bubsort(w,a);
	insort(w,a);
	/*for(i=0;i<a;i++)
	{
		cout<<w[i]<<'\t';
	}*/

	
}
void selsort(int m[],int a)
{
	int sm,i,j,pos,temp;
	for(i=0;i<a;i++)
	{
		sm=m[i];
		for(j=i;j<a;j++)
		{
			if(m[j]<sm){sm=m[j];pos=j;}
		}
		temp=m[i];
		m[i]=m[pos];
		m[pos]=temp;
	}
	for(i=0;i<a;i++)cout<<m[i]<<'\t';
}

void bubsort(int k[],int y)
{
	int i,j,temp;
	for(i=0;i<y;i++)
	{
		for(j=1;j<y;j++)
		{
			if(k[j]<k[j-1])
			{
				temp=k[j];
				k[j]=k[j-1];
				k[j-1]=temp;
			}
		}
	}
	for(i=0;i<y;i++)
	{
		cout<<k[i]<<'\t';
	}
}

void insort(int h[],int u)
{
	int i,j,temp,pos;
	for(i=1;i<u;i++)
	{
		temp=h[i];
		j=i-1;
		while(temp<h[j])
		{
			h[j+1]=h[j];j--;if(j==-1)break;
		}
		h[j+1]=temp;
	}
	for(i=0;i<u;i++)
	{
		cout<<h[i]<<'\t';
	}
}
