#include<iostream>      // program to place 8 pieces on the chessboard so they are not in the same row or same column or diagonal
#include<iomanip>

using namespace std;
void func();
void setvals(int , int);
void setzero();
void show();
void initialize();
bool check();
int arr[8][8];
int main()
{
	initialize();
	show();
	cout<<endl<<check();
	return 0;
}
void func()
{
	int i,j;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			if(arr[i][j]==0)
			{
				setvals(i,j);	//set diagonals and the row and column as 99
				arr[i][j]=1;	//set that element as 1
				//break;
			}
		}
	}
}
void setvals(int i, int j) //set the values in the same row and column and diagonals as 99
{
	for(int a=0;a<8;a++)
	{
		arr[i][a]=99;
		arr[a][j]=99;
	}
	int a=0;int b=(i>j)?i-j:j-i;
	while(a<8&&b<8) //first diagonal
	{
		if(i>j)
		{
			arr[b][a]=99;a++;b++;
		}
		else
		{
			arr[a][b]=99;a++;b++;
		}
	}
	a=0;
	if(i+j>7)a=i+j-7;
	b=i+j-a;
	while(a<8&&b>=0) //second diagonal
	{
		arr[b][a]=99;
		a++;b--;
	}
}
void setzero()
{
	for(int i=0;i<8;i++)
	for(int j=0;j<8;j++)
	arr[i][j]=0;
}
void show()
{
	for(int i=0;i<8;i++)	//output the coordinates
	{
		for(int j=0;j<8;j++)		
		if(arr[i][j]==1)
		cout<<i+1<<"\t"<<j+1<<endl;	
	}	
	for(int i=0;i<8;i++)	//output the array
	{		
		cout<<"\n\n";
		for(int j=0;j<8;j++)
		cout<<setw(2)<<arr[i][j]<<"  ";
	}
}
bool check()
{
	int i,j;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		if(arr[i][j]==1)break;
		if(j==8)return false;
	}
	return true;
}
void initialize()
{
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			setzero();
			setvals(i,j);
			arr[i][j]=1;
			func();
			if(check()==true)return;
		}
	}
}
