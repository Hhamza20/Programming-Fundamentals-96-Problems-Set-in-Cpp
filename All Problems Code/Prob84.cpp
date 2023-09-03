#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,power,sum;
	sum=0;
	cout<<"Enter a number to run loop upto: ";
	cin>>a;
	cout<<"Enter the power: ";
	cin>>b;
	for(c=1;c<=a;c++){
		for(d=1;d<=b;d++){
			power=c*c;
		}
		sum = sum+power;
	}
	cout<<"Sum of "<<b<<"th "<<" power of first "<<a<<" numbers = "<<sum;
	return 0;
}
