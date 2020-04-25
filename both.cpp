#include<iostream>
using namespace std;
int main()
{
	int n,sum1,sum2;
	sum1=0;
	sum2=0;
	for(n=0;n<=20;n=n+2)
	sum1=sum1+n;
	cout<<"Sum of first 10 even numbers::"<<sum1<<endl;
	for(n=1;n<=20;n=n+2)
		sum2=sum2+n;
	cout<<"Sum of first 10 odd numbers::"<<sum2<<endl;
}
