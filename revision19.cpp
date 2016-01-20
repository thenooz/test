#include<iostream>
using namespace std;



template  <typename typ, typename po>void disp(typ k,po l)
{
	cout<<"\nYou entered k="<<k<<" and l="<<l;
}
void disp(const char * t, int k)
{
	cout<<"\nYou are in the function with two \
specific type of arguments";
}
void disp(const char r[])
{
	cout<<"\nOnly one arguement of const char * passed ="<<r;
}

/*template <class mt=float, class mt2=int>class mc
{
	mt mv1;
	mt2 mv2;
	public :
		mc(mt m, mt2 m2):mv1(m),mv2(m2){
		}
		void di()
		{
			cout<<"mv1="<<mv1<<"   \tmv2="<<mv2;
		}
};
template <> class mc<int,int>
{
	public:
		mc(int a,int b)
		{
			cout<<"\nIn the explicit specialization of generic class for \
int and int";
		}
};*/

int main()
{
	disp("Tanuj",20);
	disp(20,"Tanuj");
	disp("Kumar");
	disp(49.9, "LOL");
	
	
	/*mc<string,int> w("Tanuj",20);
	mc<int,int> k(20,70);
	mc<> i(20.78,12);
	mc<string> o("Kumar",99);
	//mc<int, int> p(10,100);
	
	cout<<"\nfor string and int: \t";w.di();
	//cout<<"\nfor int and int:\t";k.di();
	cout<<"\nfor default data types:\t";i.di();
	cout<<"\nfor passing only first data type:\t";o.di();*/
	
	
	return 0;
}

