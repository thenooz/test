#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{int data;struct node *link;
};
void addatbeg(struct node **, struct node **, int);
void addatend(struct node **, struct node **, int);
void delbeg(struct node **, struct node **);
void delend(struct node **, struct node **);
void qdisplay(struct node *);
int main()
{
	struct node *front, *rear;
	front=rear=NULL;
	addatend(&front, &rear, 10);    //10
	qdisplay(front);
	addatbeg(&front, &rear, 20);    //20 10
	qdisplay(front);
	addatbeg(&front, &rear, 30);    //30 20 10
	qdisplay(front);
	addatend(&front, &rear, 5);     //30 20 10 5
	qdisplay(front);
	delbeg(&front, &rear);          //20 10 5
	qdisplay(front);
	delend(&front, &rear);          //20 10
	
	qdisplay(front);
	getch();
}
void addatbeg(struct node **f, struct node **r, int a)
{
	struct node *q;
	q=malloc(sizeof(struct node));
	q->data=a;q->link=NULL;
	if(*f==NULL)*f=*r=q;
	else
	{
	q->link=*f;
	*f=q;
	 }
}
void addatend(struct node **f,struct node **r, int a)
{
	struct node *q;     	
	q=malloc(sizeof(struct node));
	q->data=a;q->link=NULL;
	if(*f==NULL)*f=q;
	else (*r)->link=q;
	*r=q;
}
void delbeg(struct node **f, struct node **r)
{
	struct node *t;
	if(*f!=NULL)
	{
		t=*f;
		*f=(*f)->link;
		free(t);
	}
}
void delend(struct node **f, struct node **r)
{
	struct node *t, *h;t=*f;
	if(*f!=NULL)
	{
		while(t->link!=*r)
		{
			t=t->link;
		}
		h=t->link;
		*r=t;
		(*r)->link=NULL;
		free(h);
	}
}
void qdisplay(struct node *f)
{
	printf("\n");
	while(f!=NULL)
	{
		printf(" %d ", f->data);
		f=f->link;
	}
}
