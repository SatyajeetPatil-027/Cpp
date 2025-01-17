#include<iostream>
#include<iomanip>
#include<string>

using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of items:"<<endl;
	cin>>n;
	string name[n];
	int price[n];
	int bill=0;
	cout<<"Enter the name of purchased items:"<<endl;
	cout<<"Enter the price of purchased items:"<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>name[i];
		cin>>price[i];
		bill=bill+price[i];
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<setw(1)<<name[i]<<":"<<price[i]<<"\n";
	}
	cout<<"Total bill is:"<<bill;
}
