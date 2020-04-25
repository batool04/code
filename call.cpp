#include<iostream>
using namespace std;
int main()
{
	char day,mo,tu,we,th,fr,sa,su;
	int minutes,time;
	double rate;
	cout<<"\nTime of call for 24-hour notation:";
	cin>>time;
	cout<<"\nLength of call:";
	cin>>minutes;
	cout<<"\nDay:";
	cin>>day;
	if(day==mo||day==tu||day==we||day==th||day==fr)
	{if(time>=8&&time<=18)
	{
	rate=0.40*minutes;
	cout<<"\nrate:";
	cout<<rate;}
	else
	{
		rate=0.25*minutes;
	}
}
else
{rate=0.15*minutes;
}cout<<"\nrate:";
cout<<rate;
return 0;
}
