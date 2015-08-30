#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<stdio.h>

using namespace std;


class t{
	
	int a;char l[20];
	public: 
	/*t(){
		a=20;strcpy(l,"Tanuj");
	}*/
	void inpu(){
		cin>>a>>l;
	}
	void show(){
		cout<<endl<<a<<'\t'<<l;
	}
};
int main()
{
	t var,var2;char ch='y';long w,y;bool p;
	ofstream fout; fout.open("test.dat",ios::out|ios::binary);
	//cin>>var.a>>var.l;
	while(ch=='y'){
	var.inpu();
	
	fout.write((char *)&var, sizeof(var));//fout.close();//fout.seekp(0);
	cout<<"\nWant to enter more data?(y/n) ";cin>>ch;
}
	fout.close();
	w=sizeof(var);
	ifstream fin; fin.open("test.dat",ios::in|ios::binary);
	fin.seekg(2*w,ios::cur);
	y=fin.tellg();
	/*while(!fin.eof())
	{fin.read((char *)&var2, sizeof(var2));
	//var.show();
	//var2.show();
	
	}*/
cout<<endl<<sizeof(var2)<<"\t"<<y;	//cout<<endl<<var.a<<'\t'<<var.l;
	return 0;
}
