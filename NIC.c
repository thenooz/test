#include<stdio.h>
void main()
{
struct ab
{ int a,b;
};

struct ab obj;
scanf("%d %d",&obj.a,&obj.b);
 struct ab*ptr;
 ptr=&obj;
 int*ptr2;
 ptr2=&obj.a;
 printf("a=%d has address %u b=%d has address %d",obj.a,&obj,obj.b,&obj.b);
 ptr->b=25;
 printf("\nNow obj.b=%d \tptr->b=%d",obj.b,ptr->b);
 }
