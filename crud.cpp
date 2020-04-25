#include<iostream>
using namespace std;
int main()
{
	int w1,w2,w3,days,total_gr,c,total;
	cout<<"Enter the initial weight of green crud population::";
	cin>>w1;
	cin>>w2;
	cin>>w3;
	cout<<"Enter the number of days::";
	cin>>days;
	if(days%5==0)
	{
		while((w1+w2)<=200)
	{	w3=w1+w2;
	w1=w2;
	w3=w2;}
	cout<<"Total growth of green crud is:";
	cout<<w3;
		
	}
	else
	{
	c=days%5;
	total_gr=c*2*w3;
 	cout<<"Total growth of green crud is:";
	cout<<w3;
	}
	
	
}
