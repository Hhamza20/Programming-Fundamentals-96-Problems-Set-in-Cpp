#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter two numbers ";
	cin>>a>>b;
	if((a+b)/2 >0){
		cout<<"The average of "<<a<<" and "<<b<<" is positive";
	}
	else{
		cout<<"The average of "<<a<<" and "<<b<<" is negative";
	}
	
	return 0;
}
