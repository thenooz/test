#include<iostream>

using namespace std;
										//1. Count number of elements in the tree
struct node{							//2. Compare two trees
	int data;							//3. Find maximum depth of the tree
	node *r;node *l;					//4. Mirror a tree
};										//5. Print all the paths from root to leaves
										
struct st{
	int data; st* link;
};
node * ins(int d);
void ino(node *);

int comp(node *, node *);
int max_depth(node *);
int max(int, int);
void mirror(node *);

st * stack;
void push(int);
void pop();
void print(st *);
void printpath(node *);


int count;
int main()
{
	node *head,*t;count=0;
	head=ins(1);
	head->l=ins(2);
	head->l->r=ins(3);
	head->l->l=ins(4);
	head->r=ins(5);
	head->r->l=ins(6);
	
	t=ins(1);
	t->l=ins(2);
	t->l->r=ins(3);
	t->l->l=ins(4);
	t->r=ins(5);
	t->r->l=ins(6);
	
	//int c=comp(head,t);
	//if(c==1)cout<<"\nYes they are same!"; else cout<<"\nNyet!";
	//cout<<"Max depth is: "<<max_depth(head);
	//mirror(head);
	printpath(head);
	
	
	//ino(t); cout<<endl;ino(head);//cout<<endl;ino(head);//cout<<"Number of elements in the tree are:"<<count;
	return 0;
}

node *ins(int d)
{
	node *temp;
	temp=new node; 
	temp->data=d; 
	temp->r=NULL; 
	temp->l=NULL;

	return temp;
}
void ino(node *h)
{
	if(h==NULL)return;
	ino(h->l);
	cout<<h->data<<" ";//count++;
	ino(h->r);
}
int comp(node *h, node *r)
{
	if(h==NULL&&r==NULL)return 1;
	else if(h->data==r->data)
	{
		int k=comp(h->l,r->l);
		int l=comp(h->r,r->r);
		if(l==1&&k==1)return 1;
		else return 0;
	}
	else return 0;
}
int max_depth(node *t)
{
	int k;if(t==NULL)return 0;
	k=max(max_depth(t->r),max_depth(t->l))+1;
	
	return k;
}
int max(int a, int b)
{
	return a>b?a:b;
}
void mirror(node *h)
{
	node *temp;
	if(h==NULL)return;
	mirror(h->l);
	mirror(h->r);
	
	temp=h->l;
	h->l=h->r;
	h->r=temp;
}
void push(int a)
{
	st *t=new st;
	t->data=a;
	t->link=stack;
	stack=t;
}
void pop()
{
	st *t=stack;
	stack=stack->link;
	delete t;
}
void print(st * s)
{
	if(s==NULL)return;
	print(s->link);
	cout<<s->data<<"->";
}
void printpath(node *s)
{
	if(s==NULL)return;
	else if(s->l!=NULL||s->r!=NULL)push(s->data);
	else 
	{
		push(s->data);
		cout<<endl;print(stack);pop();return;
	}	
	
	printpath(s->l);
	printpath(s->r);
}
