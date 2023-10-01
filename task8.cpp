#include<iostream>
using namespace std;

void pet(int holidays);

int main()
{
	int holidays;
	cout<<"Holidays: ";
	cin>>holidays;
	pet(holidays);
}

void pet(int holidays)
{
	int workingdays=365-holidays;
	int gametime = (workingdays*63 + holidays*127);
	float difference = 30000 - gametime;
	if(difference<0){
	int hour = -1*difference/60;
	float min = ((-1*difference/60)-hour)*60;
	cout<<"Tom will run away"<<endl;
	cout<<hour<<" hours and "<<min<<" minutes for play";}
	if(difference > 0){
	int hour = difference/60;
	float min = ((difference/60)-hour)*60;
	cout<<"Tom sleeps well"<<endl;
	cout<<hour<<" hours and "<<min<<" minutes less for play";}
}	
