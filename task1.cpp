#include<iostream>
using namespace std;

void print(int x, int y);

main()
{	
	int x,y;
	while(true){
	cout<<"Enter the first number: ";
	cin>>x;
	cout<<"Enter the second number: ";
	cin>>y;
	if(x == y){
	print(x,y);}
	else{
	cout<<"false"<<endl;}
}	
}


void print(int x, int y)

{
	cout<<"true"<<endl;
	
}


	

