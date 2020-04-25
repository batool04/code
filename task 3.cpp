#include<iostream>
using namespace std;
int main()
{
	double height;
	int Additional_inches,weight;
 cout<<"Enter your height:";
	cin>>height;
	cout<<"Enter Additional inches:";
	cin>>Additional_inches;
	if(height==5){
	weight=110;
     cout<<"The value of weight is:"<<weight;
 }
	else if(height>5)
	{
     weight=Additional_inches*5+110;
     cout<<"The value of weight is:"<<weight;
 }
 else
 {
 cout<<"invalid";
}
}

