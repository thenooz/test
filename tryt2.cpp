#include<iostream>
using namespace std;



int main()
{

int year,day=0;
int temp=2000;

cout<<"Enter year";
cin>>year;

while(year<=temp)
{

	
	if(temp%4==0)
{
	day=day-2;}
else
{day=day-1;
}

	if(day==-1)
	day=6;
	else if(day==-2)
	day=5; 
	
temp--;
}

switch(day)
{
	case 0: cout<<"Monday"; break;
	case 1: cout<<"Tuesday"; break;
	case 2: cout<<"Wednesday"; break;
	case 3: cout<<"Thursday"; break;
	case 4: cout<<"Friday"; break;
	case 5: cout<<"Saturday"; break;
	case 6: cout<<"Sunday"; break;
	
}	

return 0;
}
