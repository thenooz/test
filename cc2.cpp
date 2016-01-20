#include<iostream>
using namespace std;

int main()
{
	int ans,i,j,t,r,s,count=1,nol;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>nol;
		int k[nol][3];
		for(j=0;j<nol;j++)
		{
			cin>>k[j][0]>>k[j][1]>>k[j][2];
		}
		for(r=0;r<nol;r++)
		{
			for(s=r+1;s<nol;s++)
			{
				if(float(k[r][0])/float(k[s][0])==float(k[r][1])/float(k[s][1]))
				if(float(k[r][1])/float(k[s][1])==float(k[r][2])/float(k[s][2]))count++;
			}
		}
	}
	cout<<endl<<count;
	
	return 0;
}
