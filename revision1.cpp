//have to test  temporary instance after destructor



#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<time.h>


using namespace std;


class out{
	public: int a; static int b;
	out(int z=11):a(z)           //constructor
	{

		b++;
		cout<<"\nConstructed";
	}
	out(out & s){                //copy constructor
		a=s.a;
		cout<<"\nInside the copy constructor";
	}
	class inn{
		public: void fun(void){
			cout<<endl<<20;
			//a=21;
			//cout<<"Out\'s a ="<<out::
		}
	
	};
	~out(){
		cout<<"\nDestroyed!!   ";
	}
	inn l;
};
int out::b=0;




int main()
{
	out o[2]; out::inn i;
	i.fun();
	cout<<o[0].a;
	o[1].l.fun();
	cout<<out::b;
	cout<<endl<<sizeof(int);
	out m=o[0];
	//cout<<out().a;
	cout<<endl<<out::b;
	
/*	float a;int b=1,s; char ch,st[80];int d[3][3], r[3][3],i,j,k;
	a=47.298782;int t[3][3]={0,0,0,0,0,0,0,0,0};
	time_t t;
	s=(unsigned) time (&t);
	srand(t);
//	cout.setf(ios::fixed);
	//cout<<setprecision(5)<<a;
	cout<<rand();
	cin.get(ch);
	cout<<(int) ch;
	cout.put(ch);cout.put(ch); cout<<"Something";
	cin.getline(st,80);
	cout<<endl<<st;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	cin>>d[i][j];
	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	cin>>r[i][j];
	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	for(int k=0;k<3;k++)
	{
		t[i][j]+=d[i][k]*r[k][j];
	}
	
	cout<<"\n";
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	cout<<t[i][j]<<" ";
	cout<<endl;
	}*/
	
	
	return 0;
}
