#include<iostream>

#define NON 6     //Number of vertices

using namespace std;
struct node{
	int v1;
	int v2;
	int cost;
	node *next;
};

int ptree[NON],noe,mincost;
int count[NON];

node *kmintree(node *, int);
int getpar(int);
void combine(int,int);

int main()
{
	node *root,*temp;
	root=new node;
	root->v1=1;root->v2=5;root->cost=1;
	temp=new node;  temp->v1=3;  temp->v2=4;  temp->cost=2;  root->next=temp;
	temp->next=new node;  temp=temp->next;
	temp->v1=1;  temp->v2=2;  temp->cost=3; temp->next=new node;  temp=temp->next;
	temp->v1=2;  temp->v2=5;  temp->cost=4; temp->next=new node;  temp=temp->next;
	temp->v1=2;  temp->v2=3;  temp->cost=5; temp->next=new node;  temp=temp->next;
	temp->v1=3;  temp->v2=5;  temp->cost=6; temp->next=new node;  temp=temp->next;
	temp->v1=4;  temp->v2=5;  temp->cost=7; temp->next=NULL;
	
	root=kmintree(root,NON);
	cout<<mincost;
	
	return 0;
}
node *kmintree(node *root, int n)       //Kruskal's Algorithm
{										// 1. Pick up an edge with next minimum cost
	node *temp=NULL,*p,*q;int p1,p2;	// 2. Check the parents of both the vertices on the edge is incident
	for(int a=0;a<NON;a++)				// 3. If their parents are different make the vertex that has not been included
	{									//    in the tree yet as the child and the other one as the parent (include that edge)
		ptree[a]=a;						// 4. Repeat the process n-1 times to get n-1 edges
		count[a]=0;
	}
	

	while(noe<(n-1)&&root!=NULL)
	{
		p=root;
		root=root->next;
		p1=getpar(p->v1);
		p2=getpar(p->v2);
	
		if(p1!=p2)
		{
			combine(p->v1,p->v2);
			noe++;
			mincost+=p->cost;
			if(temp=NULL)
			{
				temp=p;
				q=temp;
			}
			else
			{
				q->next=p;
				q=q->next;
			}
			q->next=NULL;
		}
	}
	return temp;	
}
int getpar(int a)
{
	int k=a,temp,j;
	while(k!=ptree[k])				//find the topmost parent k
	k=ptree[k];
	j=a;
	//ptree[j]=k;					// make the parent = k
	
	while(j!=k)                 //keep going back until you reach the parent
	{
		temp=ptree[j];			//save the parent of current vertex
		ptree[j]=k;             //keep assigning the parent of the vertices(in the way) equal to k(topmost parent)
		j=temp;					//got to the parent of current vertex
	}
	return k;
}
void combine(int a,int b)
{
	if(count[a]<count[b])			// if vertex a has not been include and vertex b has been, make b the parent
	ptree[a]=b;
	else{							// else make a as the parent
		ptree[b]=a;		
		if(count[a]==count[b])			// if both have not been included then include b
		count[b]++;
	}
}
