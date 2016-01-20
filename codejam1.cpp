#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream in("b.in",ios::in);
	int t,c,i,flag=0,j,l;
	in>>t;cout<<t<<endl;
	for(int a=0;a<t;a++)
	{
		flag=0;
		in>>c;//cout<<c<<" ";
		in>>i;//cout<<i<<"\n";
		int p[i];
		for(int s=0;s<i;s++)
		{
			in>>p[s];//if(a==2)cout<<p[s]<<"\t";
		}
		//cout<<endl;
		for(l=0;l<i-1;l++)
		{
			for(j=l+1;j<i;j++)
			{
				if(p[l]+p[j]==c)
				{
					flag=1;
					break;
				}
			}
			if(flag==1)break;
		}
		cout<<"Case #"<<a+1<<": ";cout<<l+1<<" "<<j+1<<endl;
	}
	
	
	
	return 0;
}
