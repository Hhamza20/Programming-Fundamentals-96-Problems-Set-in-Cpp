#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter Two Numbers ";
	cin>>a>>b;
	if(a*b <0){
		cout<<"Product of "<<a<<" and "<<b<<" is negative";
	}
	else{
		cout<<"Product of "<<a<<" and "<<b<<" is not negative";
	}
	
	
	return 0;
}
