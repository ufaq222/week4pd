#include<iostream>
using namespace std;

void bonus(int a, int b);
int main()
{
	int a,b;
	cout<<"Enter your position: ";
	cin>>a;
	cout<<"Enter your friend's position: ";
	cin>>b;
	int result;
	result=b-a;
	if(result <= 6){
	bonus(a,b);}
	else{
	cout<<"false";}
}


void bonus(int a, int b)
{ 	
	cout<<"true";
}
