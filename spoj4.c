#include<stdio.h>
#include<malloc.h>
#include<string.h>
void iflarger(char *,int);
void makepal(char *,int);
int main()
{
	char *s[100000],*temp;int i,len,flag,t,m,j,act;i=0;m=0;flag=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		s[i]=(char *)malloc(sizeof(char)*1000000);
	scanf("%s",s[i]);
	}
	//printf("\n");
    for(i=0;i<t;i++)
	{
		m=0;flag=0;act=0;
		len=strlen(s[i]);
			while(s[i][act]=='0')
		{
			act++;
		}
		if(act==len){printf("1\n");goto last;}
		for(j=0;j<len-act;j++)
		{
			s[i][j]=s[i][act+j];
		}
		s[i][len-act]='\0';
		if(s[i][0]>='0'&&s[i][0]<='8'&&s[i][1]==0){printf("%c\n",s[i][0]+1);goto last;
		}
		m=0;
		while(s[i][m]=='9')
		{
			if(m==len-act-1){
				printf("1");for(m=0;m<len-act-1;m++)printf("0");
				printf("1\n");flag=1;break;
			}m++;
		}
    	temp=malloc(sizeof(char)*(len-act));
    	strcpy(temp,s[i]);
   		if(!flag)iflarger(temp,len-act);
   		last:;
    }
   // printf("\n%s",temp);
    return 0;
}
void iflarger(char *str,int len)
{
	int flag,i,e,pos;char *temp;flag=0;
	temp=malloc(sizeof(char)*len);
	//printf("%s",str);
	strcpy(temp,str);
	makepal(temp,len);
	if(len%2==0)e=0;else e=1;
    for(i=len/2+e;i<len;i++)
    {
    	if(temp[i]<str[i]){
    		flag=1;break;
    	}
    	if(temp[i]>str[i])
    	{
    		flag=0;break;
    	}
    	if(i==len-1){flag=1;break;}
    }
    pos=0;//printf("%d flag %d",i,flag);
    if(flag==1)
    {
    	if(e==1&&temp[len/2]!='9'){temp[len/2]++;goto end;}
    	else if(e==1&&temp[len/2]=='9'){temp[len/2]='0';pos++;
    	}
    	xy:
    	if(temp[len/2-pos-1+e]!='9')
		{
			temp[len/2-pos-1+e]++;
			//printf("Inside %s",temp);
			makepal(temp,len);
		}
		 if(temp[len/2-pos]=='9')
		{
			temp[len/2-pos]='0';pos++;goto xy;
		}
    }
    end:
    printf("%s\n",temp);
   // return temp;
}
void makepal(char *temp,int len)
{
	int i,e;
		if(len%2==0)e=0;else e=1;
    {
    	for(i=len/2+e;i<len;i++)
    	{
    		temp[i]=temp[len-i-1];    		
    	}
    }
   //printf("\n%s %d\n",temp,len);
}
