#include<iostream>

using namespace std;

void sort(int s[],int l);

int main()
{
	int i;
	int s[8]={3,7,2,1,4,8,6,5};
	cout<<"Original:  ";
	for(i=0;i<8;i++)
	{
		cout<<s[i]<<"   ";
	}
	
	sort(s,8);
	cout<<endl<<endl<<endl;
	for(i=0;i<8;i++)
	{
		cout<<s[i]<<"   ";
	}
	
	return 0;
}

void sort(int arr[],int s)
{
	int temp;
	for(int i=0;i<s;i++)
	{
		if(s>0&&arr[i]>arr[i+1])
		{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			cout<<"\nExchanged:   "<<arr[i]<<" "<<arr[i+1];
		}
		sort(arr,s-1);
	}
}
