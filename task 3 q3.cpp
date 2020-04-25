#include<iostream>
using namespace std;
int main()
{
	
	double mass,weight; 
	char choice;
	cout<<"Enter the mass of car"<<endl;
	cin>>mass;
	cout<<"Press E for mass on earth and M for mass on moon"<<endl;
    cin>>choice;
    if(choice=='E')
    {
    	weight=mass*9.81;
    	cout<<"The weight of car on earth is:";
    	cout<<weight;
	}
	else
	{ 
	weight=(mass*9.81)/6;
	cout<<"The weight of car on moon is:";
	cout<<weight;
	}
	return 0;
}
