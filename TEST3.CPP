#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[3],i,j;
 int b[2][3]={1,2,3,4,5,6};
/* for(i=0;i<3;i++)
 scanf("%d",&a[i]);
 for(i=0;i<3;i++)
 printf("%d",a[i]); */
 for(i=0;i<2;i++)
 for(j=0;j<3;j++)
 printf("%d",b[i][j]);
 getch();
}