#include<iostream>
using namespace std;
int main()
{double Buoyant_force,Vol,weight,radius,specific_weight;
specific_weight=62.4;
cout<<"\nWeight of sphere:";
cin>>weight;
cout<<"\nRadius of sphere:";
cin>>radius;
Vol=1.33*3.14*radius*radius*radius;
Buoyant_force=Vol*specific_weight;
cout<<"\nBuoyant force is:";
cout<<Buoyant_force<<endl;
if(Buoyant_force>=weight)
{ cout<<"\nObject will float."<<endl;
}
else
{ cout<<"\nObject will sink."<<endl;
}
return 0;
}
