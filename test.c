#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main()
{
	char **p;int i;
	p=malloc(sizeof(char)*3*3);
	for(i=0;i<3;i++)
	{
		scanf("%s",(p+i));
	}	
	for(i=0;i<3;i++)
	{
		printf("\n%s",p+i);
	}
	getch();
}
