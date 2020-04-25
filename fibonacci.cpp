#include<iostream>
using namespace std;
int main()
{
	int f1=0,f2=1,f3=1;
	cout<<"\n\nThe Fibonacci series is given below:"<<endl;
	while((f1+f2)<=200)
	{
		f3=f1+f2;
		f1=f2;
		f2=f3;
		cout<<f3<<"\n";
	}
	
	return 0;
}
