#include<stdio.h>
#include<malloc.h>
#include<conio.h>
void display(int*,int,int);
int main()
{
	 int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	 display(a,3,4);
	//printf("%u",*(*a+1));
	 getch();
	 return 0;
	 
}
void display(int *q,int r,int s)
{
	int i,j;
	for(i=0;i<r;i++)
	{
	
		for(j=0;j<s;j++)
		printf("%d ",*(q+s*i+j));
		printf("\n");
	}
}
