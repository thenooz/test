#include<iostream>
#include<climits>

using namespace std;

class heap{
	int *arr;
	int last;
	public:
		heap(int *a,int b)
		{
			arr=a;
			last=b-1;
		}
	void heapify(int l);
	void show()
	{
		for(int i=1;i<=last;i++)
		cout<<arr[i]<<"  ";
	}
	void sort()
	{
		for(int i=last;i>0;i--)
		{
			int temp=arr[i];
			arr[i]=arr[1];
			arr[1]=temp;
			for(int k=1;i>2*k+1;)
			{
				int maxi=arr[2*k]>arr[2*k+1]?2*k:2*k+1,max=arr[maxi];
				if(arr[k]>max)break;
				int t=arr[k];
				arr[k]=max;
				arr[maxi]=t;
				k=maxi;
			}
		}
		if(arr[1]>arr[2])
		{
			int temp=arr[1];
			arr[1]=arr[2];
			arr[2]=temp;
		}
	}
};
void heap::heapify(int l)
{
	//arr[0]=INT_MAX;
	last=l-1;
	int temp;
	for(int i=1;i<l;i++)
	{
		int r=i;
		//int k=arr[i];
		while(arr[r]>arr[r/2]&&r>0)
		{
			temp=arr[r];
			arr[r]=arr[r/2];
			arr[r/2]=temp;
			r=r/2;
		}
	}
}

int main()
{
	int a[]={INT_MAX,2,6,12,7,3,11,4,14,1,5,10,8,9,13};
	heap h(a,15);
	h.heapify(15);
	h.sort();
	h.show();
	
	return 0;
}
