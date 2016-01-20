#include<iostream>

using namespace std;
void numstones(int,int,int);

int main()
{
	int nums;
	cin>>nums;
	int arr[nums][3];
	for(int i=0;i<nums;i++)
	{
		//arr[i]=new int[3];
		cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
	}
	for(int i=0;i<nums;i++)
	{
		numstones(arr[i][0],arr[i][1],arr[i][2]);
	}
	
	return 0;
}
void numstones(int n1, int n2, int m)
{
	//int n1,n2,m;//given
	int min,i;
	//cin>>n1>>n2>>m;
	min=n1<n2?n1:n2;
	//min=min<m?min:m;
	if(m<=min){i=min/m;i--;i=m-i;
	for(;i<=m;i++)
	{
		n1=n1-i;
		n2=n2-i;
	}
	}
	else
	{
		n1=n1-min;
		n2=n2-min;
	}
	cout<<n1+n2<<endl;
}
