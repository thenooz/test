#include<stdio.h>
#include<conio.h>
struct a{
	struct b{
		       int i;float f;char ch;}x;
	struct c{
		       int j;float g;char ch;}y;
	};
	void fun(struct c*);
	int main()
	{
		 //struct c *p;
		 struct a z;
		 //p=&z.y;
		//printf("Address of z:%d",&z);
		printf("\n%d %f %c",z.x.i,z.x.f,z.x.ch);
		fun(&z.y);
		getch();
		return 0;
	}
	void fun(struct c *p)
	{    int offset;
		struct b *address;
		offset=(char *)((struct c*)(&((struct a*)0)->y)->j)-(char *)((struct a*)0);
		address=(struct b*)((char *)&(p->j)-offset);
		address->i=100;address->f=3.3;address->ch='r';
	}
