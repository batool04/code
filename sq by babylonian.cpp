#include<iostream>
using namespace std;
int main()
{
	int n,c(10);
	double ans,guess,r;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	cout<<"Enter any guess number:"<<endl;
	cin>>guess;
	r=n/guess;
	guess=(guess+r)/2;
	while(c>0)
	{
		r=n/guess;
	guess=(guess+r)/2;
		if(guess<=(guess*0.01)+guess)
	  ans=guess;
	else
	guess=r/n;
	guess=(guess+r)/2;
	c-=1;
	}
	cout<<"Square root of";cout<<"\t"<<n<<" is";cout<< ":";cout<<ans<<endl;
}
