#include<stdio.h>
#include<malloc.h>
#include<math.h>
struct node{
	long int d;struct node *l;
};
short int isprime(long int n);
struct node *func(long int,long int);
int main()
{
	struct node * (link)[10];
	long int m,n,i;short int t;
	scanf("%hu",&t);
	for(i=0;i<t;i++)
	{
		scanf("%li %li",&m,&n);
		link[i]=func(m,n);
	}
	for(i=0;i<t;i++)
	{
		while(link[i]!=NULL)
		{
			printf("%d\n",(link[i])->d);
			link[i]=(link[i])->l;
		}
	  printf("\n");
	}
	return 0;
}
struct node *func(long int m, long int n)
{
	long int i;short int l;
	struct node *start,*temp;temp=start=NULL;
	for(i=m;i<=n;i++)
	{
		l=isprime(i);
		if(l==1)
		{
			if(start==NULL)
			{
				start=(struct node*)malloc(sizeof(struct node));
				start->d=i;start->l=NULL;temp=start;
			}
			else
			{
				temp->l=(struct node*)malloc(sizeof(struct node));
				temp->l->d=i;temp->l->l=NULL;
				temp=temp->l;
			}
		}
	}
	return start;
}
short int isprime(long int n){
   long int i;

    if (n==2)
        return 1;
        
    if(n==1)return 0;

    if (n%2==0)
        return 0;

    for (i=3;i<=sqrt(n);i+=2)
        if (n%i==0)
            return 0;

    return 1;
}
