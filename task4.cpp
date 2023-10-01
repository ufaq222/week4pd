#include<iostream>
using namespace std;

void checkSpeed(int s);

int main()
{ 	int s;
	while(true){
	cout<<"Speed: ";
	cin>>s;
	int speedlimit;
	speedlimit=100;
	if(s > speedlimit){
	checkSpeed(s);}
	if(s <= speedlimit){
	cout<<"Perfect!You're going good."<<endl;}

  }	
}

void checkSpeed(int s)
{
	cout<<"Halt...YOU WILL BE CHALLENGED!!!"<<endl;
	
}

