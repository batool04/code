#include<iostream>
using namespace std;
int main()
{
	int weight;
	double height,BMI;
	cout<<"Enter the weight:";
	cin>>weight;
	cout<<"Enter the height:";
	cin>>height;
	BMI=(weight)/(height*height);
	cout<<"The value of BMI:";
	cout<<BMI;
}
