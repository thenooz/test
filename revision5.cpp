#include<fstream>
#include<iostream>
#include<string>

using namespace std;

class student{
	int roll;
	char name[20];
	char batch[5];
	char branch[5],ch;
	public:
		void getdet(){
			cout<<"Enter batch branch rollno: ";
			//cin>>batch>>branch>>roll;
			cin>>roll;
			cout<<"Enter name: ";
			cin>>name;
		}
		
		void showdata(){
			cout<<"\n"<<roll<<" "<<name;
			//cout<<"\nThe credentials are: "<<batch<<'/'<<branch<<'/'<<roll<<'\t'<<name<<"\tDone";
		}
		bool comp(int r){
			if(r==roll) return true;
			else return false;
		}
		bool isla(student a){
			if(a.roll>=roll) return true;
			else return false;
		}
		void mod(){
			cout<<"\nEnter name: ";cin>>name;
		}
};
int main()
{
char flag='y',last='y';
	//fstream f;
	fstream f2;
	char ch='y';int i;long g;
	student s,temp;
	//f.open("temp.dat",ios::out|ios::binary); 
	f2.open("test2.dat",ios::in|ios::out|ios::binary);
	
	cout<<"Enter the roll no to be modified: ";cin>>i;
	
	while(f2){
			f2.read((char*)&temp,sizeof(temp));if(f2.eof())break;
				if(temp.comp(i)){
					g=f2.tellg();
					temp.mod();
					f2.seekp(g);
					f2.write((char *)&temp,sizeof(temp));		
				}				
	}
//f.close();
f2.close();
//remove("test2.dat"); rename("temp.dat","test2.dat");
/*while(ch=='y'){
			f2.open("test1.dat",ios::in|ios::binary);
			f.open("temp.dat",ios::out|ios::binary);
		last='y';flag='y';    
		s.getdet();
		while(f2){
			f2.read((char*)&temp,sizeof(temp));if(f2.eof())break;
				if(s.isla(temp)&&flag=='y'){
					f.write((char*)&s,sizeof(s));
					flag='n';last='n';       //flag tell whether the record id yet to be written
				}	
	
			f.write((char *)&temp,sizeof(temp));	
		}
	
		if(last=='y')
		{
			f.write((char*)&s,sizeof(s));
		}
	//s.showdata();
		f.close();
		f2.close();
		remove("test1.dat");
		rename("temp.dat","test1.dat");
		cout<<"\nWant to add more records?(y/n) ";cin>>ch;
	}*/
	//cout<<"Enter the roll no to be searched: ";cin>>i;
	f2.open("test2.dat",ios::in);
	f2.seekg(0);
	while(f2){
		f2.read((char *)&s,sizeof(s));
		if(f2.eof())break;
		//if(s.comp(i)){
			s.showdata();//break;
	//	}
	}
	
	return 0;
}
