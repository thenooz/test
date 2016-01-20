#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;
int prev;
char* out(char);
int main()
{
	/*char ch[20];
	gets(ch);
	cout<<endl<<strlen(ch);*/
	int t;char l[200],c[200];int j;
	cin>>t;
	cin.ignore();
	for(int i=0;i<t;i++)
	{
		gets(l);
		for(j=0;j<strlen(l);j++)
		{
			strcpy(c,out(l[j]));
			cout<<c;
			if(j<strlen(l)-1)
			{
				if(c[strlen(c)-1]==out(l[j+1])[0])
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
}
char * out(char a)
{
	char c[200];
	switch(a)
	{
		case 'a': strcpy(c,"2"); break;
		case 'b': strcpy(c,"22"); break;
		case 'c': strcpy(c,"222"); break;
		case 'd': strcpy(c,"3"); break;
		case 'e': strcpy(c,"33"); break;
		case 'f': strcpy(c,"333"); break;
		case 'g': strcpy(c,"4"); break;
		case 'h': strcpy(c,"44"); break;
		case 'i': strcpy(c,"444"); break;
		case 'j': strcpy(c,"5"); break;
		case 'k': strcpy(c,"55"); break;
		case 'l': strcpy(c,"555"); break;
		case 'm': strcpy(c,"6"); break;
		case 'n': strcpy(c,"66"); break;
		case 'o': strcpy(c,"666"); break;
		case 'p': strcpy(c,"7"); break;
		case 'q': strcpy(c,"77"); break;
		case 'r': strcpy(c,"777"); break;
		case 's': strcpy(c,"7777"); break;
		case 't': strcpy(c,"8"); break;
		case 'u': strcpy(c,"88"); break;
		case 'v': strcpy(c,"888"); break;
		case 'w': strcpy(c,"9"); break;
		case 'x': strcpy(c,"99"); break;
		case 'y': strcpy(c,"999"); break;
		case 'z': strcpy(c,"9999"); break;
		case ' ': strcpy(c,"0"); break;
	}
}
