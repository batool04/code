#include<iostream>
using namespace std;
int main()
{
	char zodiac_sign;
	int date,month;
	cout<<"\nEnter you birth month::";
	cin>>month;
	cout<<"\nEnter your bith date::";
	cin>>date;
	if(month==3)
	{
		if(date>20)
		{
		cout<<"\nYour Zodiac sign is Aries."<<endl;
	}
	else
	{ cout<<"\nYour Zodiac sign is Pisces."<<endl;
	}
}
	else if(month==4)
	{
		if(date>=20)
{
		cout<<"\nYour Zodiac sign is Taurus."<<endl;}
		else
		{ cout<<"\nYour Zodiac sign is Aries."<<endl;}	
	}
	else if(month==5)
	{
	
		if(date>20)
		{
		cout<<"\nYour Zodiac sign is Gemini."<<endl;
	}
	else
	{
		cout<<"\nYour Zodiac sign is Taurus."<<endl;
	}
}
	else if(month==6)
	{
		if(date>21)
	{
		cout<<"\nYour Zodiac sign is Cancer."<<endl;
	}
	else{
		cout<<"\nYour Zodiac sign is Gemini."<<endl;
	}
}
else if(month==7)
{ 
if(date>22){
	cout<<"\nYour Zodiac sign is Leo."<<endl;
}
else
{
	cout<<"\nYour Zodiac sign is Cancer."<<endl;
}
}
else if(month==8)
{
	if(date>22)
	{
	cout<<"\nYour Zodiac sign is Virgo."<<endl;
}
else
{
	cout<<"\nYour Zodiac sign is Leo."<<endl;
}
}
else if(month==9)
{
	if(date>22)
	{
		cout<<"\nYour Zodiac sign is Libra."<<endl;
	}
	else
	{
		cout<<"\nYour Zodiac sign is Virgo."<<endl;
	}
}
else if(month==10)
{
	if(date>22)
	{
		cout<<"\nYour Zodiac sign is Scorpio."<<endl;
	}
	else
	{
		cout<<"\nYour Zodiac sign is Libra."<<endl;
	}
	
}
else if(month==11)
{
	if(date>21)
	{
		cout<<"\nYour Zodiac sign is Sagittarius."<<endl;
	}
	else
	{
		cout<<"\nYour Zodiac sign is Scorpio."<<endl;
	}
}
else if(month==12)
{
	if(date>21)
	{
		cout<<"\nYour Zodiac sign is Capricorn."<<endl;
	}
	else
	{
		cout<<"\nYour Zodiac sign is Sagittarius."<<endl;
	}
}
else if(month==1)
{
	if(date>19)
	{
		cout<<"\nYour Zodiac sign is Aquarius."<<endl;
	}
	else{
		cout<<"\nYour Zodiac sign is Capricorn."<<endl;

	}
}
else if(month==2)
{
	if(date>18)
	{ cout<<"\nYour Zodiac sign is Pieces."<<endl;
	}
	else
	{
		cout<<"\nYour Zodiac sign is Aquarius."<<endl;
	}
}
else
{
	cout<<"invalid"<<endl;
}
return 0;
}
