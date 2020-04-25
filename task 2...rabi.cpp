#include<iostream>
using namespace std;
int main()
{
	int coffee=160,cola=34,caff_for_coffee,caff_for_cola;
	cout<<"caffeine in 16-ounce cup of coffee:";
	cout<<coffee<<endl;
	cout<<"caffeine in 12-ounce can of cola:";
	cout<<cola<<endl;
	//10 gram =10000 milligram
	//34 milligram --------12-ounce can of cola
	//10000 milligram------x drinks
	//drinks -------10000/34
	//160 milligram------16-ounce cup of coffee
	//10000 milligram------y drinks
	//drinks---------10000/160
	caff_for_coffee=10000/160;
	caff_for_cola=10000/34;
	cout<<caff_for_coffee<<"::"<<"Drinks of coffee it takes to kill a person"<<endl;
	cout<<caff_for_cola<<"::"<<"Drinks of cola it takes to kill a person"<<endl;
	return 0;
}
