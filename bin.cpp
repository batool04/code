#include<iostream>
using namespace std;
int main()
{
	int n,b;
	cout<<"\nEnter the value of number:"<<endl;
	cin>>n;
	cout<<"Binary equivalent is::";
	while(n>0)
	{
		b=n%2;
		cout<<b;
		n=n/2;
	}
	return 0;
	
}
