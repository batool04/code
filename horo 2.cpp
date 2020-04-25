#include<iostream>
using namespace std;
int main()
{
	string zodiac_sign;
	cout<<"Your Zodiac sign is::";
	cin>>zodiac_sign;
	if(zodiac_sign=="Aries"||zodiac_sign=="Leo"||zodiac_sign=="Sagittarius")
	{
	if(zodiac_sign=="Aries")
	{
   	cout<<"\nElement::Fire"<<endl;
	cout<<"\nCompatibility with Leo and Sagittarius."<<endl;
	}
	else if(zodiac_sign=="Leo")
	{
   	cout<<"\nElement::Fire"<<endl;
	cout<<"\nCompatibility with Aries and Sagittarius."<<endl;
	}
	else if(zodiac_sign=="Sagittarius")
	{
	cout<<"\nElement::Earth"<<endl;
	cout<<"\nCompatibility with Aries and Sagittarius."<<endl;	
	}
	}
	else if(zodiac_sign=="Taurus"||zodiac_sign=="Virgo"||zodiac_sign=="Capricorn")
	{
	if(zodiac_sign=="Taurus")
	{
   	cout<<"\nElement::Earth"<<endl;
	cout<<"\nCompatibility with Virgo and Capricorn."<<endl;
	}
	else if(zodiac_sign=="Virgo")
	{
   	cout<<"\nElement::Earth"<<endl;
	cout<<"\nCompatibility with Taurus and Capricorn."<<endl;
	}
	else if(zodiac_sign=="Capricorn")
	{
	cout<<"\nElement::Earth"<<endl;
	cout<<"\nCompatibility with Taurus and Virgo."<<endl;
}
}
else if(zodiac_sign=="Gemini"||zodiac_sign=="Libra"||zodiac_sign=="Aquarius")
	{
	if(zodiac_sign=="Gemini")
	{
   	cout<<"\nElement::Air"<<endl;
	cout<<"\nCompatibility with Libra and Aquarius."<<endl;
	}
	else if(zodiac_sign=="Libra")
	{
   	cout<<"\nElement::Air"<<endl;
	cout<<"\nCompatibility with Gemini and Aquarius."<<endl;
	}
	else if(zodiac_sign=="Aquarius")
	{
	cout<<"\nElement::Air"<<endl;
	cout<<"\nCompatibility with Gemini and Libra."<<endl;
}
}
else if(zodiac_sign=="Scorpio"||zodiac_sign=="Cancer"||zodiac_sign=="Pisces")
	{
	if(zodiac_sign=="Scorpio")
	{
   	cout<<"\nElement::Water"<<endl;
	cout<<"\nCompatibility with Cancer and Pisces."<<endl;
	}
	else if(zodiac_sign=="Cancer")
	{
   	cout<<"\nElement::Water"<<endl;
	cout<<"\nCompatibility with Scorpio and Pisces."<<endl;
	}
	else if(zodiac_sign=="Pisces")
	{
	cout<<"\nElement::Water"<<endl;
	cout<<"\nCompatibility with Scorpio and Cancer."<<endl;
}
}
else
{
	cout<<"Invalid";
}
return 0;
}











