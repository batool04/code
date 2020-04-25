#include<iostream>
using namespace std;
int main()
{
	int T_period=5,days,c,n;
	double I_size;
	char ans;
	do
	{
	cout<<"Enter the initial weight of green crud in pounds:";
	cin>>I_size;
	cout<<"Enter the number of days:";
	cin>>days;
	c=days/T_period;
	double f1=I_size;
	double f2=I_size;
	for(n=0;n<c;n++)
	{
	double	fn=f1+f2;
		f1=f2;
		f2=fn;
	}
	cout<<"In "<<days<<" days "<<"  green crud will be "<<f2<<" pounds"<<endl;
	cout<<"Would you like to enter another weight?";
	cin>>ans;
}
while(ans=='y'||ans=='Y');
}
