#include<iostream>
#include<string.h>
#include<stdio.h>
//#include<conio.h>
using namespace std;
struct node {
	int num;
	char *name;
	node *next;
};

node *buc[26],*top[26];
void addtobuck(int,char *);
void search(char *);
void getname(char *);

int main()
{
	int a;char ch;
	cin>>a;
	char name[30];int number;
	for(int i=0;i<a;i++)
	{
		cin.ignore();
		char *name=new char[30];
		getname(name);
		cin>>number;
		addtobuck(number, name);
		//cout<<name;
	}
	cin.ignore();
	while(1)
	{
		//getch();
		
		getname(name);
		if(*(name)=='\0')
		break;
		search(name);
	}
	return 0;
}
void addtobuck(int num, char *name)
{
	char ch=*name;
	int a=ch-97;
	node *temp=buc[a];
	if(temp==NULL)
	{
		temp=new node;
		temp->name=name;temp->num=num;temp->next=NULL;
		buc[a]=temp;top[a]=temp;
		return;
	}
	//while(temp->next!=NULL)
	//temp=temp->next;
	
	top[a]->next=new node;
	top[a]=top[a]->next;
	top[a]->name=name;
	top[a]->num=num;top[a]->next=NULL;
}
void search(char *name)
{
	char ch=*name;int found=0;
	int a=ch-97;
	node *temp=buc[a];
	if(temp==NULL)
	{
		cout<<"Not found"<<endl;
		return;
	}
	while(temp!=NULL)
	{
		if(!strcmp(temp->name,name))
		{
			cout<<temp->name<<"="<<temp->num<<endl;
			found=1;
			break;
		}
		temp=temp->next;
	}
	if(found==0)
	cout<<"Not found"<<endl;
}
void getname(char *name)
{
	int i=0;//name=new char [100];
	char ch;
	while(1)
	{
		ch=getchar();
		if(ch=='\n'||ch==-1)
		{
			name[i]='\0';
			break;			
		}
		name[i]=ch;
		i++;
	}
}
