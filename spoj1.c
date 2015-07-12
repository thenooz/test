#include<stdio.h>
#include<malloc.h>
struct node{
	int d;struct node *link;
};
int main()
{
	struct node *start,*temp;
	char c,p[2],l;
	int a,last;last=0;
	start=NULL;
	scanf("%d",&a);
	while(a!=42)
	{
		if(start==NULL)
		{
			start=malloc(sizeof(struct node));
			start->d=a;start->link=NULL;
	    }
		else
		{
			temp=start;
			while(temp->link!=NULL)
			temp=temp->link;
		    temp->link=malloc(sizeof(struct node));
		    temp->link->d=a;temp->link->link=NULL;
	    }
		scanf("%d",&a);  
	}
	while(1)
    {
    	c=getchar();
    	if(last==1&&c=='\n'){break;}
    	if(c=='\n')last=1;
    	if(c!='\n')last=0;
    }
	temp=start;
	while(temp!=NULL)
	{
		printf("%d\n",temp->d);
		temp=temp->link;
	}
	return 0;
}
