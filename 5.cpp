#include<stdio.h>
#include<conio.h>
int main()
{
	int num[3][2]={11,22,33,44,55,66};
	int i,j;
	for(i=0;i<3;i++)
	{
	for(j=0;j<2;j++)
	{
	printf("%d",num[i][j]);	
	printf("  %d\t",*(num[i]+j));
	}
	}
	for(i=0;i<3;i++)
	printf("\n%d",*num[i]);
	getch();
}
