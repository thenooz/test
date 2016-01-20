#include<iostream>
#include<climits>

using namespace std;

class minheap
{
	int *h;
	int capacity;
	int hs;
	public:
		minheap(int cap)
		{
			hs=0;
			capacity=cap;
			h=new int[cap];
		}
		int insert(int a)
		{
			hs++;
			h[hs-1]=a;
			int i=hs-1;
			while(i>0&&h[(i-1)/2]>h[i])
			{
				swap(h+(i-1)/2,h+i);
				i=(i-1)/2;
			}
		}
		void decrease(int ind, int b)
		{
			h[ind]=b;
			while(ind>0&&h[(ind-1)/2]>h[ind])
			{
				swap(h+(ind-1)/2,h+ind);
				ind=(ind-1)/2;
			}
		}
		int dlt(int a)
		{
			decrease(a,INT_MIN);
			exmin();
		}
		int getmin()
		{
			return *h;
		}
		int exmin()
		{
			//cout<<"  hs="<<hs;
			if(hs==0)return INT_MAX;
			if(hs==1)
			{
				hs--;
				return h[0];
			}
			int a=*h;
			h[0]=h[hs-1];
			hs--;
			heapify(0);
			return a;			
		}
		void heapify(int a)
		{
			int l=2*a+1;
			int r=2*a+2;
			int min=a;
			if(l<hs&&h[l]<h[a])
			min=l;
			if(r<hs&&h[r]<h[min])
			min=r;
			if(min!=a)
			{
				swap(h+a,h+min);
				heapify(min);
			}
		}
		void swap(int *a,int*b)
		{
			int t=*a;
			*a=*b;
			*b=t;
		}	
};

int main()
{
	minheap h(20);
	h.insert(3);
    h.insert(2);
    h.dlt(1);
    h.insert(15);
    h.insert(5);
    h.insert(4);
    h.insert(45);
    cout << h.exmin() << " ";
    cout << h.getmin() << " ";
    h.decrease(2, 1);
    cout << h.getmin();
	return 0;
}
