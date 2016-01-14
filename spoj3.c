#include<stdio.h>				//Wrong code
#include<malloc.h>
#include<string.h>
int nofb(char *);
int main()
{
	int i,l,j,a,u,num,n,m,start,t;
	char c,exp[400],op,s[100][400];
	scanf("%d",&m);
	for(i=0;i<m;i++)
	scanf("%s",s[i]);
 for(t=0;t<m;t++)
 {  strcpy(exp,s[t]);
	l=nofb(exp);
	for(num=0;num<l;num++)
	{
		a=0;
		while(exp[a]!=')')
		{
			if(exp[a]=='(')start=a+1;
			a++;
		}
		i=start;
		j=start+1;
		while((exp[j]<'a'&&exp[j]>'Z')||exp[j]<'A'||exp[j]>'z'||(exp[i]!='+'&&exp[i]!='*'&&exp[i]!='/'&&exp[i]!='+'&&exp[i]!='-'&&exp[i]!='^'))
		{
			i++;j++;
		}      			
		u=start-1;op=exp[i];
		for(j=start;j<a;j++)
		{
			if(j!=i)
			{
				exp[u]=exp[j];
				u++;
			}
		}
	exp[u]=op;u++;
		while(exp[u+2]!='\0')
		{
				exp[u]=exp[u+2];
				u++;	
		}exp[u]='\0';
	}
	printf("%s",exp);if(t!=m-1)printf("\n");
 }
	return 0;
}
int nofb(char *exp)
{
	int i,count;
	count=0;
	for(i=0;i<strlen(exp);i++)
	{
		if(exp[i]=='(')count++;
	}
	return count;
}
