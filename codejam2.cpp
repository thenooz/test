#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;
struct node{
	char *data;
	node *next;
};
node *top;
void push(char *);
void pop();
int main()
{
	char l[200],*c;int t;
	cin>>t;
	cin.ignore();
	for(int i=0;i<t;i++)
	{
		gets(l);
		int j=0;
		int k=0;
		while(l[j]!='\0')
		{
			if(k==0)
			{
				c=new char[20];
			}
			c[k]=l[j];
			if(c[k]==' '||l[j+1]=='\0')
			{
				c[k+1]='\0';
				if(l[j+1]=='\0')
				{
					c[k+1]=' ';
					c[k+2]='\0';
				}
				push(c);
				k=0;
				j++;
			}
			else{
				j++;
				k++;
			}
		}
		cout<<"Case #"<<i+1<<": ";
		while(top!=NULL)
		{
			pop();cout;
			//cout<<e<<" ";
		}	
		cout<<endl;
	}
	return 0;
}
void push(char *a)
{
	if(top==NULL)
	{
		top=new node;
		top->data=a;
		top->next=NULL;
	}
	else{
		node *temp=new node;
		temp->data=a;
		temp->next=top;
		top=temp;
	}
	//cout<<"\nPushed:"<<top->data;
}
void pop()
{
	cout<<top->data;
	node* temp=top;
	top=top->next;
	delete temp;
}
