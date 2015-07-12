#include<stdio.h>
#include<conio.h>
struct s{char name[10];int n;}s1={"Tanuj",20};
void disp(struct s *);
int main()
{
	struct s s2;s2=s1;
	disp(&s1);
	getch();
}
void disp(struct s *a)
{ printf("Name:%s Age:%d",a->name,a->n);
}
