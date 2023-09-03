#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter two numbers ";
	cin>>a>>b;
	if((a+b)>50)
	{
		cout<<a<<" + "<<b<<" is greater than 50";
	}
	else{
		cout<<a<<" + "<<b<<" is not greater than 50";
	}
	
	return 0;
}
