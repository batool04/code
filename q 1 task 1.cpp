#include<iostream>
using namespace std;
int main()
{
	float princi_amnt,int_rate,no_of_yrs,simple_interest;
	cout<<"Principal amount is:";
	cin>>princi_amnt;
	cout<<"Interest rate is:";
	cin>>int_rate;
	cout<<"Number of years are:";
	cin>>no_of_yrs;
	simple_interest=((princi_amnt)*(int_rate)*(no_of_yrs))/(100);
	cout<<"Calculated simple interest is:";
	cout<<simple_interest;
	return 0;
}
