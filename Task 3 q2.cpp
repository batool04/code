#include<iostream>
using namespace std;
int main()
{
	int x,y,z,dividned,quotient,remainder,divisor;
	cout<<"Enter the value of x:";
	cin>>x;
	cout<<"Enter the value of y:";
	cin>>y;
	z=x/y;
	dividned=x;
	divisor=y;
	quotient=x/y;
	remainder=x%y;
	cout<<"dividned is:"<<dividned<<endl<<"divisor is:"<<divisor<<endl<<"quotient is:"<<quotient<<endl<<"remainder is:"<<remainder<<endl;
}
