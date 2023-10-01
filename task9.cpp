#include<iostream>
using namespace std;

void tpChecker(int people,int tp);

int main()
{
	int people,tp;
	cout<<"Number of people in the household: ";
	cin>>people;
	cout<<"Number of rolls of TP: ";
	cin>>tp;
	tpChecker(people,tp);
}

void tpChecker(int people,int tp)
{
	int a,b,c;
	a=tp*500;
	b=people*57;
	c=a/b;
	if(c <= 14){
	cout<<"Your TP will only last "<<c<<" days,buy more!";}
	if(c > 14){
	cout<<"Your TP will last "<<c<<" days,no need to panic!";}
}
