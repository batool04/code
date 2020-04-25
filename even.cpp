#include<iostream>
using namespace std;
int main()
{
	int c,sum;
	c=0;
	sum=0;
	while(c<=20)
	{
	if(c%2==0)
		{
		cout<<c<<endl;
		c=c+2;
		sum=sum+c;
	}
	
}
cout<<"Sum::"<<sum;
}

