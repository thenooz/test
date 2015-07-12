#include<stdio.h>
#include<conio.h>
void display(int *,int,int);
//void show(int (*q)[4],int,int);
//void print(int q[][4],int,int);
int main()
{
	int a[3][4]={1,2,3,4,
	             5,6,7,8,
				 9,10,11,12
				 };
    display(a,3,4);
				 
}
void display(int *q,int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		printf("%d",*(q+i*col+j));
		printf("\n");
	}
	printf("\n");
	
}
