#include<iostream>

using namespace std;

int main()
{
	int m,n,z,l,r,b,ans,count=0,i=0,j=0;
	cin>>m>>n;
	int a[m][n];
	for(i=0;i<m;i++)for(j=0;j<n;j++)a[i][j]=0;
	cin>>z>>l>>r>>b;
	i=0;j=0;
	if(m*n<(z+l+r))count=m*n;
	//else if(m*n>z&&m*n<(z+l+r))ans=m*n;
	else{
		while(z)
		{
			a[i][j]=1;if(i<m-1&&j<n-1){i++;j++;}else if(i<m-1&&j==n-1){i++;j=0;}//else if(i==m-1&&j==n-1)break;
			z--;count++;
		}
		while(l)
		{
			a[i][j]=1;if(i<m-1&&j<n-1){i++;j++;}else if(i<m-1&&j==n-1){i++;j=0;}
			l--;count++;
		}
		for(i=(count/n);i<m,r>0;i++)
		{
			for(j=n-1;j>=0,r>0;j--)
			{
				if(a[i][j]!=0)continue;
				a[i][j]=3;count++;r--;
			}
		}
		for(;i<m,b>0;i++)
		{
			for(j=0;j<n,b>0;j++)
			{
				if(a[i][j]!=0)continue;
				if(j==0||j==n-1)
				{
					a[i][j]=4;
					count++;b--;
				}
				else
				{
					if(a[i][j-1]==4)continue;
					else
					{
						a[i][j]=4;
						count++;b--;
					}
				}
			}
		}
	}
	//cout<<endl<<count;
	for(i=0;i<m;i++){for(j=0;j<n;j++)cout<<a[i][j]<<" ";cout<<endl;}
	
	return 0;
}
