#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter the number:"<<endl;
	cin>>num;
	
	for(int i=1;i<11;++i)
	{
		int table =num * i;
		//cout<<"The table is:";
		cout<< num<<"*"<<i<<"="<<table<<endl;
	}
	return 0;
}
