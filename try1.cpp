#include<iostream>
using namespace std;

void getday(int a);
int main()
{
	int a;
	cin>>a;
	getday(a);	
	return 0;
}
void getday(int a)
{
	int day;
	if(a>=2001)
	{
		day=a-2001 + ((a-2001)/4);
	}
	else
	{
		day=(2001-a + ((2001-a)/4));
		day=6-(day%7);
	}
	switch(day%7)
	{
		case 0: cout<<"Monday";break;
		case 1:cout<<"Tuesday";break;
		case 2:cout<<"Wednesday";break;
		case 3:cout<<"Thursday";break;
		case 4:cout<<"Friday";break;
		case 5:cout<<"Saturday";break;
		case 6:cout<<"Sunday";break;
	}
}
