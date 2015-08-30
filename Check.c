#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>
//void fun(char *);
int main()
{
	char c;int last;last=0;
    while(1)
    {
    	c=getchar();
    	if(last==1&&c=='\n'){break;}
    	if(c=='\n')last=1;
    	if(c!='\n')last=0;
    }
    last=EOF;
    printf("%d",last);
}
