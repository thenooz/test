#include<iostream>
#include<math.h>
using namespace std;
void update(int *,int *);
int main()
{
	int a,b;
	cin>>a>>b;
	update(&a,&b);
	cout<<a<<endl<<b;
	return 0;
}
void update(int *a,int* b)
{
	int t1,t2;
	t1=(*a)+(*b);
	t2=(*a)-(*b);
	if(t2<0)t2=(-1)*t2;
	*a=t1;*b=t2;
}
