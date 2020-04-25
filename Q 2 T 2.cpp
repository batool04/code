#include<iostream>
using namespace std;
int main()
{
	int milgrm,Tcaff;
	cout<<"Enter the number of milligrams in 1 drink:";
	cin>>milgrm;
	//10 grams = 10000 milligrams
	//1 drink  = 5 milligrams
	//x        = 10000 milligrams
	//x(drink) = 10000/5 milligrams
	Tcaff=(10000/milgrm);
	cout<<Tcaff<<"::"<<"Drinks it takes to kill a person";
    return 0;
}
