#include<iostream>
using namespace std;

void mostfrequent();
void leader();
int main()
{
	
	return 0;
}
void mostfrequent()				//Find the number with most frequency
{
	int a[]={1,2,3,3,4,5,6,2,3,3},b[10][2],j,k,*count1,count,i;
	
	/*for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}*/
	for(j=0;j<10;j++)
	{
		for(k=0;k<9;k++)
		{
			if(a[k+1]<a[k])
			{
				int temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
		}
	}
	
	for(k=0;k<10;k++)
	cout<<a[k]<<" ";
	k=0;j=0;
	while(k<10)
	{
		count=0;
		b[j][0]=a[k];k++;count++;
		for(;a[k]==a[k-1];k++)count++;
		b[j][1]=count;
		j++;
	}
	count1=&b[0][1];
	for(i=0;i<j;i++)
	count1=(*count1<b[i][1])?&b[i][1]:count1;
	cout<<endl<<"And the number with most frequency is:"<<*(count1-1);
}
void leader()
{
	int a[10];
	for(i=0;i<10;i++)
	{
		for(j=i)
	}
}
