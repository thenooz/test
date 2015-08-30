#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void get(int a);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
 int a,b,i,temp;
    cin>>a>>b;if(a>b){
    	temp=a;a=b;b=temp;
    }
    for(i=a;i<=b;i++)
    {
    	get(i);cout<<endl;
    }
   
   return 0;
}
void get(int a)
{
	 switch(a)
        {
        case 1:cout<<"one";break;
        case 2:cout<<"two";break;
        case 3:cout<<"three";break;
        case 4:cout<<"four";break;
        case 5:cout<<"five";break;
        case 6:cout<<"six";break;
        case 7:cout<<"seven";break;
        case 8:cout<<"eight";break;
        case 9:cout<<"nine";break;
        default:if((a%2)==0&&(a>9))cout<<"even";
        		else if((a%2)!=0&&(a>9))cout<<"odd";
              
        }
}
