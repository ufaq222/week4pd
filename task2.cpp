#include<iostream>
using namespace std;

void reverse(string x);

main()
{	
	string x;
	while(true){
	cout<<"Enter 'true' or 'false': ";
	cin>>x;
	if(x == "true"){
	reverse(x);}
	if(x == "false"){
	cout<<"true"<<endl;}
 }
	
}

void reverse(string x)
{	
	cout<<"false"<<endl;
}

