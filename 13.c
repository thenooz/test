#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{ int num;struct node *link;};
void append(struct node **,int);
void display(struct node *);
void addatbeg(struct node **,int);
void addafter(struct node **,int,int);
void add(struct node **,int);
void dlt(struct node **,int);
void reverse(struct node **);
int main()
{
	 struct node *p; int f;f=1;
	 p=NULL;
	 append(&p,1);                  //p is the pointer to the first struct node variable
	 append(&p,2);                  //every variable has it's own data and the address to he next unnamed dynamically allocated variable of the struct type
	 append(&p,3);append(&p,4);
	 append(&p,6);append(&p,10);
	 addatbeg(&p,1);
	 addafter(&p,8,6);
	 display(p);
	 add(&p,9);add(&p,11);
	 printf("   p->link->link->num= %d  ",p->link->link->num);
	 dlt(&p,f);
	 printf("\nAftre deletion of node %d :  ",f);
	 display(p);
	 reverse(&p);
	 printf("\nAfter reversal:");
	 display(p);
	 getch();
	 return 0;
	 
}
void append(struct node **q,int i)
{
	struct node *temp,*r;temp=*q;
    if(*q==NULL)
    {
    	temp=malloc(sizeof(struct node));
    	temp->num=i;temp->link=NULL;
    	*q=temp;
    }
    else
    {
    	temp=*q;
    	while(temp->link!=NULL)
    	temp=temp->link;
    	r=malloc(sizeof(struct node)); //allocates space for struct node type variable and passes the starting address to r
    	r->num=i;r->link=NULL;
    	temp->link=r;
    }
}
void display(struct node *q)
{
	while(q!=NULL)
	{
		printf(" %d ",q->num);
		q=q->link;
	}
}
void addatbeg(struct node **q,int i)
{
	struct node *temp;
    temp=malloc(sizeof(struct node));
    temp->num=i;temp->link=*q;
    *q=temp;
}
void addafter(struct node **q,int i,int a)
{ int j;struct node *temp,*r;temp=*q;
	for(j=1;j<a;j++)
	{temp=temp->link;}
	//r=temp->link;
	r=malloc(sizeof(struct node));
	r->num=i;r->link=temp->link;
	temp->link=r;
}
void dlt(struct node **q,int a)
{
	int j;struct node *temp;temp=*q;
	if(a==1)*q=(*q)->link;
	for(j=2;j<a;j++)
	temp=temp->link;
	temp->link=temp->link->link;
}
void add(struct node **q,int i)
{
	 struct node *temp,*r;
	 temp=*q;
	 while(temp!=NULL)
	 {    
	 	 if(temp->num>=i)
	 	 { //printf("Hello");
	 	 	r=malloc(sizeof(struct node));
	 	 	r->num=temp->num;r->link=temp->link;
			temp->link=r;
			temp->num=i;
			return;
	 	 }
	 	 else if(temp->link==NULL){r=malloc(sizeof(struct node));r->num=i;r->link=NULL;temp->link=r;return;
	 	 }
	 	 temp=temp->link;
	 }
}
void reverse(struct node** x)
{
	struct node *r,*s,*q;
	r=NULL;q=*x;
	while(q!=NULL)
	{
		s=r;
		r=q;
		q=q->link;
		r->link=s;
	}
	*x=r;
}
