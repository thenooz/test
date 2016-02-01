#include<iostream>

using namespace std;

class polynomial{
	struct  node{
		int coeff;
		int exp;
		node *next;
	}*head;
	public:
		void append(int c,int e);
		void show();
		polynomial add(polynomial a);
		polynomial()
		{
			head=NULL;
		}
		
};
void polynomial::append(int c,int e)
{
	//cout<<"entered";
	if(head==NULL)
	{
		head=new node;
		head->coeff=c;
		head->exp=e;
		head->next=NULL;
	}
	else
	{
		//cout<<"here";
	 	node *temp=head;
	 	while(temp->next!=NULL)
	 	temp=temp->next;
	 	temp->next=new node;
	 	temp=temp->next;
	 	temp->coeff=c;
	 	temp->exp=e;
	 	temp->next=NULL;
	}
	//cout<<"appended";
}
void polynomial::show()
{
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->coeff<<"x^"<<temp->exp;
		if(temp->next!=NULL)
		if(temp->next->coeff>0)cout<<" + ";
		else cout<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
polynomial polynomial::add(polynomial a)
{
	node *t=head, *t2=a.head;polynomial c;
	while(t!=NULL||t2!=NULL)
	{
		if((t==NULL&&t2!=NULL)||(t2->exp<t->exp))
		{
			c.append(t2->coeff,t2->exp);
			t2=t2->next;
		}
		else if((t2==NULL&&t!=NULL)||(t->exp<t2->exp))
		{
			c.append(t->coeff,t->exp);
			//c.append(t2->coeff,t->exp);
			t=t->next;
		}
		else if(t->exp==t->exp)
		{
			c.append(t->coeff+t2->coeff,t->exp);
			t=t->next;t2=t2->next;
		}
		
	}
	return c;
}

int main()
{
	polynomial p1,p2;
	p1.append(1,0);
	p1.append(3,1);
	p1.append(-2,2);
	p1.append(4,4);
	p1.show();
	p2.append(2,0);
	p2.append(6,1);
	p2.append(4,2);
	p2.append(1,3);
	p2.show();
	polynomial p3=p2.add(p1);
	p3.show();
	
	return 0;
}
