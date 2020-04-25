#include<iostream>
using namespace std;
int main()
{
	float n,c,score,points,total_score=0,total_points=0,total;
	cout<<"Enter the number of exercises::"<<endl;
	cin>>n;
	for(c=1;c<=n;c++)
{	cout<<"Enter possible score for exercise"<<c<<endl;
	cin>>score;
	cout<<"Enter possible points for exercise"<<c<<endl;
	cin>>points;
	total_score=total_score+score;
	total_points=total_points+points;
	total=(total_score/total_points)*100;}
	cout<<"Your total is "<<total_score<<" out of "<<total_points<< " or "<<total << " % ";
}
