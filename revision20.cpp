#include<iostream>
using namespace std;
#include "revision20_1.cpp"
#include "revision20_2.cpp"

namespace three{
int k=23;
}
namespace four{
int l=99;
namespace five{
int l=45;
void di(){
	cout<<"\nfour::l="<<four::l<<"\tinner l="<<l;
}
}
}
namespace three{		//namespaces can be defined at different places as
						//long as there is no conflict of defination of variables 

int j=15;
}

//using namespace two;     //to include whole namespace
int main()
{
	//display();
	
	one::display();cout<<endl;
	//two::display();  changed to unnamed namespace
	cout<<endl<<three::k;
	three::k=10;
	cout<<"\t"<<three::k;
	one::a=12;
	one::display();
	cout<<"\t"<<three::j;
	cout<<a<<endl;
	four::five::di();
	
	return 0;
}
