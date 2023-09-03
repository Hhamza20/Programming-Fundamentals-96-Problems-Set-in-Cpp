#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,sum,fact;
	cout<<"Enter a Number: ";
	cin>>a;
	sum=0;
	for(b=1;b<=a;b++){
		fact=1;
		for(c=1;c<=b;c++){
			fact = fact *c;
		}
		sum=sum+fact;
	}
	cout<<"Sum of factorials of first "<<a<<" integers is "<<sum;
	return 0;
}
