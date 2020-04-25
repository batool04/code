#include<iostream>
using namespace std;
int main()
{
	int wght,chrg_for_no_stamp,charges_for_delivery,total_chrgs;
	string place;
	cout<<"Enter the weight of parcel::";
	cin>>wght;
	chrg_for_no_stamp=wght*2;
	cout<<"Enter the place::";
	cin>>place;
	if(place=="Attock")
	{
		charges_for_delivery=20;
		total_chrgs=chrg_for_no_stamp+charges_for_delivery;
		cout<<"Total charges are::";cout<<total_chrgs<<endl;
	}
	else
	{
			charges_for_delivery=40;
			total_chrgs=chrg_for_no_stamp+charges_for_delivery;
		cout<<"Total charges are::";cout<<total_chrgs<<endl;
	}

}
