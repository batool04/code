#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,optr;
	cout<<"\nFirst operand:";
	cin>>a;
	cout<<"\nSecond operand:";
	cin>>b;
	cout<<"\nEnter the operator:";
	cin>>optr;
	switch(optr)
	{
	case 1:
	cout<<"\nAnswer is::";cout<<(a+b);
	break;
	case 2:
	cout<<"\nAnswer is::";cout<<(a-b);
	break;
	case 3:
	cout<<"\nAnswer is::";cout<<(a*b);
	break;
	case 4:
	cout<<"\nAnswer is::";cout<<(a/b);
	break;
	case 5:
	cout<<"\nAnswer is::";cout<<(a%b);
	break;
	case 6:
	cout<<"\nAnswer is::";cout<<(a++);
	break;
	case 7:
	cout<<"\nAnswer is::";cout<<(++b);
	break;
	case 8:
	cout<<"\nAnswer is::";cout<<(a--);
	break;
	case 9:
	cout<<"\nAnswer is::";cout<<(--b);
	break;
	case 10:
	cout<<"\nAnswer is::";cout<<sqrt(b);
	break;
	case 11:
	cout<<"\nAnswer is::";cout<<(a*a);
	break;
	default:
	cout<<"invalid";
	return 0;
}
}
