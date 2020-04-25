#include<iostream>
using namespace std;
int main()
{
	int c,th,te,hu,u,y;
	char C='Y';
	for(c=1;C=='y'||C=='Y';c++)
	{
		cout<<"Enter a Year:";
		cin>>y;
		th=y/1000;
		hu=y/100;
		hu=hu%10;
		te=y/10;
		te=te%10;
		u=y%10;
		{
			switch(th)		
{
		case 1:
			cout<<"In Roman::M";
			break;
		case 2:
			cout<<"MM";
			break;
			case 3:
			cout<<"MMM";
			break;
			default:
				cout<<"invalid";
			}
			switch(hu)
			{
		case 0:
			cout<<"";
			break;
		case 1:
			cout<<"C";
			break;
		case 2:
			cout<<"CC";
			break;
		case 3:
			cout<<"CCC";
			break;
		case 4:
			cout<<"CD";
			break;
		case 5:
			cout<<"D";
			break;
		case 6:
			cout<<"DC";
			break;
		case 7:
			cout<<"DCC";
			break;
		case 8:
			cout<<"DCCC";
			break;
		case 9:
			cout<<"CM";
			break;
		}
		switch(te)
		{
			case 0:
				cout<<"";
				break;
			case 1:
			cout<<"X";
			break;
		case 2:
			cout<<"XX";
			break;
		case 3:
			cout<<"XXX";
			break;
		case 4:
			cout<<"XL";
			break;
		case 5:
			cout<<"L";
			break;
		case 6:
			cout<<"LX";
			break;
		case 7:
			cout<<"LXX";
			break;
		case 8:
			cout<<"LXXX";
			break;
		case 9:
			cout<<"XC";
			break;
		}
		switch(u)
		{	
		case 0:
			cout<<"";
			break;
		case 1:
			cout<<"I";
			break;
		case 2:
			cout<<"II";
			break;
		case 3:
			cout<<"III";
			break;
		case 4:
			cout<<"IV";
			break;
		case 5:
			cout<<"V";
			break;
		case 6:
			cout<<"VI";
			break;
		case 7:
			cout<<"VII";
			break;
		case 8:
			cout<<"VIII";
			break;
		case 9:
			cout<<"IX";
			break;
			
		}
		cout<<"\nWould you like to enter another year?";
		cin>>C;}
	}
	return 0;
}
			
			
