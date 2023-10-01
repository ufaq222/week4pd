#include<iostream>
using namespace std;

void ticket(string n,int p);

main()
{	string n;
	int p;
	while(true){
	cout<<"Enter the country's name: ";
	cin>>n;
	cout<<"Enter the ticket price in dollars: $";
	cin>>p;
	float discount,result;
	if(n == "Pakistan"){
	ticket(n,p);}
	if (n == "Ireland"){
	discount = (p/100)*10;
	result = p-discount;
	cout<<"Final ticket price after discount: $"<<result<<endl;}
	if(n == "India"){
	discount = (p/100)*20;
	result = p-discount;
	cout<<"Final ticket price after discount: $"<<result<<endl;}
	if(n == "England"){
	discount = (p/100)*30;
	result = p-discount;
	cout<<"Final ticket price after discount: $"<<result<<endl;}
	if(n == "Canada"){
	discount = (p/100)*45;
	result = p-discount;
	cout<<"Final ticket price after discount: $"<<result<<endl;}
  }	
}

void ticket(string n,int p)
{
	float discount,result;
	discount = (p/100)*5;
	result = p-discount;
	cout<<"Final ticket price after discount: $"<<result<<endl;
}

	


	