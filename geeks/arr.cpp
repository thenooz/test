#include<iostream>

using namespace std;

int map[100];
int main()
{
	int arr[10]={1,-3,4,6,7,2,9,8,20,-5},t,sum=15;
	for(int i=0;i<10;i++)
	{
		t=sum-arr[i];
		if(map[t]==1&&t>=0)
		cout<<t<<"\t"<<arr[i]<<endl;
		map[arr[i]]=1;
	}
	return 0;
}
