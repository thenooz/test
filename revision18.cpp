#include<iostream>
#include<iomanip>
using namespace std;
#define FUNC(a,b) { cout<<"LOL";\
                cout<<endl<<"BOL";\
				cout<<"\nKya baat hai!!!  a="<<a<<" b="<<b;\
				if(b==0)cout<<"\nb was zero!";}
class a{
	public:
		static int b;
		int t;
		void st()
		{
			b=21;
		}
};
int a::b=29;      //just like ios::binary


ostream & rightArrow(ostream &output){
	output<<"---->";
	//return output;
}

istream & getName(istream &input){
	cout<<"Enter yo name nigga:";
	return input;
}

int main()
{
	/*cout.setf(ios :: showpos | ios:: showpoint); format flags
	cout<<a::b<<" "<<29232.712332<<endl;	
	cout.unsetf(ios::showpos);
	cout<<29232.712332<<endl;
	
	cout.width(12);
	cout<<"Hello\n";
	
	
	cout.fill('!');
	cout.precision(5);
	cout.width(10);
	cout.setf(ios::left);
	cout<<12.22132;*/
	
	/*cout<<hex<<109<<endl;       //manipulators  
	cout<<setw(10)<<setfill('9')<<"Tanuj"<<endl;   //define custom manipulators
	
	string name;
	
	cin>>getName>>name;
	cout<<rightArrow<<name; */
	
	/*string l("LOL");            //string class
	l.append(" Hello");
	cout<<l.size();
	
	l.insert(0,"Zeroth position ");
	cout<<endl<<l.substr(4,10);
	l.erase(1,1);
	cout<<endl<<l;*/
	
	
	/*#ifdef FUNC       conditional compilation  
	cout<<"Defined";
	#else
	cout<<"Not defined";
	#endif
	#undef FUNC
	#ifndef FUNC
	cout<<"\nSuccessfully undefined!";
	#endif
	//FUNC("Hello",0);*/
	
	cout<<"Current line:"<<__LINE__;
	cout<<"\nCurrent file:"<<__FILE__;
	cout<<"\nCompilation date:"<<__DATE__;
	cout<<"\nCompilation time:"<<__TIME__;
	cout<<"\nStandard Cpp Code:"<<__STDC__;
	cout<<"\nIs Compiler standard cpp conforming "<<__cplusplus;
	#line 200 "lol.txt"
	cout<<"\nCurrent line after using line directive:"<<__LINE__;
	cout<<"\nFile name after using line directive:"<<__FILE__;
	
	return 0;
}
