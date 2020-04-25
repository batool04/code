#include<iostream>
using namespace std;
int main()
{
	int n,sum;
	n=1;
	sum=1;
	while(n<20)
	{
		if(n%2!=0)
		{
			cout<<n<<endl;
			n=n+2;
			sum=sum+n;
		}
		}
		cout<<"Sum::"<<sum<<endl;
			
}
