#include<iostream>
using namespace std;
int main()
{
	int seconds,minutes,hours,remainder,total_seconds;
	cout<<"Enter the value of total_seconds:";
	cin>>total_seconds;
	hours=total_seconds/3600;
	remainder=total_seconds%3600;
	minutes=remainder/60;
    seconds=remainder%60;
    cout<<"hours are:"<<hours<<endl<<"minutes are:"<<minutes<<endl<<"seconds are:"<<seconds<<endl;
}

