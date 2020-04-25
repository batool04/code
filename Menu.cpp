#include<iostream>
using namespace std;
int main()
{
	int no_of_deals,Quantity,T_price,Price_for_whole_deal,deal;
	


                                       	cout<<"\t\t\t\t\t\t--:::MENU:::--"<<endl;
cout<<"\n\t\t\t\tDifferent deals are given........Select any one of deal"<<endl;
cout<<"\n-:::-1-SEAFOOD:::-\t\t\t\t\t-:::-2-VEGETABLE:::-"<<endl;
cout<<"\nSalt and Pepper Squid.\t\t\t=290Rs.\t\tStired fried vegetable\t\t\t=220Rs."<<endl;cout<<"Sweet and Sour Fish Fillet.\t\t=300Rs.\t\tGarlic spinach\t\t\t\t=200Rs."<<endl;cout<<"Warm Prawn Salad\t\t\t=420Rs\t\tVegetable Pulao.\t\t\t=150Rs."<<endl;
cout<<"\n-:::-3-DESSERT:::-\t\t\t\t\t-:::-4-COMBINATION:::-"<<endl;
cout<<"\nLemon Pie.\t\t\t\t=300Rs\t\tChopped BBQ and Chicken\t\t\t=350Rs."<<endl;cout<<"Ice-cream(3-scp)\t\t\t=200Rs.\t\tChopped boneless chicken(1Kg)\t\t=250Rs."<<endl;cout<<"Banana Pudding\t\t\t\t=350Rs.\t\tChicken Karahi(1Kg))\t\t\t=350Rs."<<endl;
cout<<"\n\t\t\t******************************************************************";
cout<<"\n\n\n\t\tDeal number::";
cin>>deal;
switch(deal)
{
	case 1:
	Price_for_whole_deal=910;
	break;
	case 2:
	Price_for_whole_deal=570;
	break;	
	case 3:
	Price_for_whole_deal=850;
	break;
	case 4:
	Price_for_whole_deal=950;
	break;
	default:
	cout<<"Invalid"<<endl;
}
cout<<"\n\t\tNumber of deals::";
cin>>no_of_deals;
T_price=no_of_deals*Price_for_whole_deal;
cout<<"\n\t\tTotal Price=";
cout<<T_price;
cout<<"\t\t\n\n\n\t\t\t\t\t<><><><><><><><><><><><><><><><><>";
}


