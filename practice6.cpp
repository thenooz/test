#include<iostream>
#include<vector>

using namespace std;

class something{
	int data;
	public:
		something(int k):data(k){
		}
		void set(int k)
		{
			data=k;
		}
		void show()
		{
			cout<<data<<"\t";
		}
};
int main()
{
	vector<something> S;
	S.reserve(5);
	S.push_back(something(10));
	S.push_back(something(9));
	S.resize(5,something(1));
	for(int i=0;i<5;i++)
	{
		S[i].show();
	}
	
	return 0;
}
