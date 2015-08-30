#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<fstream>
int & func();
class test{
	public:
		const int k;
		test():k(20){
		}
		
};
using namespace std;

int main()
{
	char ch,line[50];int y=21;
	ofstream of; of.open("00.txt");
	of<<"\nforgot the newline earlier";of.close();
	ifstream l("revision3.cpp");// or you could use l.open("filename"); after declaring the ifstream object
	/*for(int i=0;i<340;i++)
	{
		l.get(ch);
		cout.put(ch);
	}
	
/*	cout<<endl<<ios::in<<endl<<test().k<<endl<<sizeof(test);
	l.close();
	l.open("00.txt");
	l.getline(line,10);
	cout.write(line,10);         //cout.write outputs whatever characters it encounters 
	cout<<"Hello";				 //but puts() first writes the stuff and then inserts a newline
	//int &q=
	func();
	//cout<<q;
	//cout<<s;*/
	
	/*while(l){
		l.get(ch);					// l.get(line,70,'\0');l.get(ch);cout<<line<<ch;
		cout<<ch;
	}*/
	
	l.getline(line,30);l.get(ch);
	cout<<line<<ch<<"This is the proof";
	
	return 0;
}

int & func()
{
	int a=10;
	cout<<"\nIn here\n";
	return a;
}
