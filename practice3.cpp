#include<iostream>

using namespace std;

void cal(int [], int );
int isla(int[], int);

int main()
{
	int size;
	cout<<"Enter size of array:";cin>>size;
	cout<<"Enter array:";int *arr=new int[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cal(arr,size);
	
	return 0;
}
void cal(int arr[],int size)
{
	int *count=new int, *num=new int, k=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]!=-1){
			*(num+k)=arr[i];
			*(count+k)=1;
			for(int j=i+1;j<size;j++)
			{
				if(arr[j]==arr[i]&&arr[j]!=-1)
				{
					(*(count+k))++;arr[j]=-1;
				}
			}
			k++;
		}
	}
	for(int h=0;h<k;h++)
	{
		cout<<*(num+h)<<"\t"<<*(count+h)<<endl;
	}
	//cout<<k<<endl<<;
	int la=isla(count,k);//cout<<la<<endl;
	cout<<"\nThe number with the maximum frequency is "<<*(num+la)<<" appearing "<<*(count+la)<<" times.";
}

int isla(int *count,int s)
{
	int la=0;
	for(int i=0;i<s;i++)
	{
		if(*(count+la)<*(count+i))la=i;
	}
	return la;
}
