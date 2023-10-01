#include<iostream>
using namespace std;


void flowershop(int rr,int wr,int t);

int main()
{
	int rr,wr,t;
	cout<<"Red rose: ";
	cin>>rr;
	cout<<"White Rose: ";
	cin>>wr;
	cout<<"Tulips: ";
	cin>>t;
	flowershop(rr,wr,t);

}

void flowershop(int rr,int wr,int t)
{
	float op,discount,result;
	op=(rr*2)+(wr*4.10)+(t*2.50);
	discount=(op/100)*20;
	result=op - discount;
	if(op > 200){
	cout<<"Original price: $"<<op<<endl;
	cout<<"Price after Discount: $"<<result<<endl;}
	if(op < 200){
	cout<<"Original price: $"<<op<<endl;
	cout<<"No discount applied.";}
	
}


