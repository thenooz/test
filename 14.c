#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
	int data;struct node *link;
};
void push(struct node **,int);
int pop(struct node **);
void stack_disp(struct node *);
int main()
{
	struct node *top;int i;
	top=NULL;
	push(&top,1);
	push(&top,2);
	push(&top,3);
	push(&top,4);
	push(&top,5);
	stack_disp(top);
	i=pop(&top);
	printf("Item popped: %d",i);
	stack_disp(top);
}
void push(struct node **s,int i)
{
	struct node *r;
	r=malloc(sizeof(struct node));
	r->data=i;
	r->link=*s;
	*s=r;
}
int pop(struct node **s)
{
	int i;struct node *q;
	i=(*s)->data;q=*s;
	*s=(*s)->link;
	free(q);
	return i;
}
void stack_disp(struct node *q)
{
	printf("\n");
	while(q!=NULL)
	{
		printf("%2d",q->data);
		q=q->link;
	}
	printf("\n");
}
