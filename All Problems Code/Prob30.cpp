#include<iostream>
using namespace std;
int main(){
	float a,b,c;
	cout<<"Enter Two Numbers ";
	cin>>a>>b>>c;
	if((a+b+c)/3 <0){
		cout<<"Average of "<<a<<" "<<b<<" and "<<c<<" is negative";
	}
	else{
		cout<<"Average of "<<a<<" "<<b<<" and "<<c<<" is not negative";
	}
	
	return 0;
}
