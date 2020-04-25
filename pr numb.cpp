#include<iostream>
using namespace std;
int main()
{
int n,c,i;
c=0;
cout<<"Enter the value of number:";
cin>>n;
if(n==0)
{
	cout<<"its not a prime number"<<endl;
	
}
else
{
	for(i=2;i<n;i++)
 if(i%n==0)
	c++;
		if(c>1)
{
	cout<<"Its not a prime number:"<<endl;
}
else
{
	cout<<"Its a prime number."<<endl;
}}
return 0;

}
