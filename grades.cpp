#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"\nEnter your marks::";
	cin>>marks;
	if(marks>=85)
	{
		cout<<"\nGrade::A"<<endl;
		cout<<"\nRemarks::Distinction"<<endl;
	}
	else if(marks>=80)
	{
	cout<<"\nGrade::A-"<<endl;
	cout<<"\nRemarks::Excellent"<<endl;
   }
   else if(marks>=75)
   {cout<<"\nGrade::B+"<<endl;
   cout<<"\nRemarks::Very Good"<<endl;
   }
   else if(marks>=70)
   {cout<<"\nGrade::B-"<<endl;
   cout<<"\nRemarks::Good"<<endl;
   }
   else if(marks>=65)
   {cout<<"\nGrade::C"<<endl;
   cout<<"\nRemarks::Average"<<endl;
   }
   else if(marks>=55)
   {cout<<"\nGrade::C-"<<endl;
   cout<<"\nRemarks::Below Average"<<endl;
   }
   else if(marks>=45)
   {cout<<"\nGrade::D"<<endl;
   cout<<"\nRemarks::Poor"<<endl;
   }
   else
   {cout<<"\nGrade::F"<<endl;
   cout<<"\nRemarks:Fail"<<endl;
}
return 0;
}

