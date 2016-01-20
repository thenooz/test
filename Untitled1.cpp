#include<iostream>
#include<fstream>
#include<iomanip>
#include<csignal>
#define sq(x) (x)*(x)      // If it was x*x only then a invocation of the form sq(3+1) would 
						   // lead to an expression 3+1*3+1=7 and not 16
using namespace std;
union k{
	int a1;
	int a2;
};
void func()
{
	cout<<"This is a func too.....let\'s see what happens";
}
class p{
	public:
	void func()
	{
		cout<<"\nThis is class p!";
	}
};
class o{
	public:
		void func()
		{
			cout<<"Maaaannn";
		}
		void caller()
		{
			::func(); //global func
			func(); //Mah nigga
		}
};
/*class q:virtual public o, virtual public p  //Now we know even if we declare them virtual
{											  //they are still different. Virtual only works in identical funcs of the same class
	public:
		void m()
		{
			func();
		}
}*/
void sighand(int a)
{
	cout<<"The signal number "<<a<<" will be handled.";
	//exit(a);
}
int main()
{
	/*int length;
	cin>>length;
	//int *a=new int[length]; 
	int a[length];
	a[length-1]=7;
	a[length-2]=3;
	cout<<a[4]<<" "<<a[2];//
	int a=320;
	int *t=&a;
	cout<<int(char(*t));//
	enum{H,K,L
	};
	cout<<K;
	enum alpha{A=22,B,C
	};
	//int A=22;
	cout<<B;//
	int a=10;int c=a++ + ++a + ++a + a;
	cout<<c<<" "<<a;//
	int b=(a=9,c=11,a+c);
	cout<<" "<<b;
	a>b?cout<<"What the hell":(cout<<"\nEverything is quite fine",a=22,cout<<"\nNow a="<<a);//
	char c;
	cout<<"Enter character:";
	cin.get(c);
	cout<<"Here:";cout.put(c)<<"It ends";//
	char s[30];
	cin.getline(s,30);
	cout<<s;//
	cout.setf(ios::right);cout.setf(ios::fixed);float l=55.0;
	cout<<setw(10)<<"Hello!";cout<<endl<<setw(10)<<"Bye";cout<<endl<<setprecision(5)<<l;//
	o o1; o1.caller();//
	ifstream fin("one.txt");
	char ch;float f;fin>>ch;fin>>f;cout<<ch<<" "<<f; ///f will be zero if no number is present after first character
	fin.close();//
	int a=800;char *ch=(char *)&a;
	cout<<int(*(ch+1));//
	cout.setf(ios::fixed);
	cout<<setprecision(3)<<4+5*6/3.0+7;*/
	/*int i,j,k,l=0;
	for(i=0;i<10;i++)
	for(j=0;j<i;j++)
	for(k=0;k<j;k++)
	l++;
	cout<<l;*/
	//cout<<sizeof('a');
	//cout<<int(EOF);
	/*signal(SIGINT, sighand);
	while(1)
	{
		cout<<"Still doing it \n";
		//sleep(1);
	}
	char *t="Hello";
	t="Bye";
	cout<<t;*/
	
	return 0;
}
