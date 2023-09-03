#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter two numbers to find their sum ";
	cin>>a>>b;
	cout<<"Enter a third number to compare to Sum of first two numbers ";
	cin>>c;
	if((a+b)>c){
		cout<<"Sum of "<<a<<" and "<<b<<" is greater than "<<c;
	}
	else{
		cout<<"Sum of "<<a<<" and "<<b<<" is not greater than "<<c;
	}
	
	return 0;
}
