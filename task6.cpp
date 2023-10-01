#include<iostream>
using namespace std;

void longesttime(int h,int m);

int main()
{
	int h,m;
	longesttime(h,m);
	
}

void longesttime(int h,int m)

{
	cout<<"Enter the number of hours: ";
	cin>>h;
	cout<<"Enter the number of minutes: ";
	cin>>m;
	int minute;
	minute=h*60;
	if(minute>m){
	cout<<h;}
	else{
	cout<<m;}
	
}
	
	
	

	
	
	
 
