#include<iostream>
using namespace std;
#include<cmath>
int main()
{
	int P_A,P_B;
	float Rate_A,Rate_B,Y=1;
	cout<<"Enter the population of town A:";
	cin>>P_A;
	cout<<"Enter the growth rate for town A:";
	cin>>Rate_A;
	cout<<"Enter the population of town B:";
	cin>>P_B;
	cout<<"Enter the growth rate for town B:";
	cin>>Rate_B;
	
	
	if(P_A<P_B&&Rate_A>Rate_B)
	{
		while(P_A<P_B)
		{
			(P_A=((Rate_A/100)*P_A)+P_A);
			(P_B=((Rate_B/100)*P_B)+P_B);
			Y++;
		}
		
		cout<<"Population of town A is::"<<P_A<<endl;
		cout<<"Population of town B is::"<<P_B<<endl;
		cout<<"The population of town  A will be greater than  or equal to town B after "<<Y<<" Years";
	}
	else{
		cout<<"invalid";
	}
	return 0;
}
