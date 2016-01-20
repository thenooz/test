#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;


int main()
{
	int t;
	double v,d;
	cin>>t;
	cout.setf(ios::fixed);
	for(int i=0;i<t;i++)
	{
		cin>>v>>d;
		cout<<"Case #"<<i+1<<": "<<setprecision(7)<<0.5*(asin(9.8*double(d)/(double(v)*double(v))))*180.0/3.14159265359<<endl;
	}
	return 0;
}
