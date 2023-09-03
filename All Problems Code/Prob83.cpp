#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,power;
	power = 1;
	cout<<"Enter a number to run loop upto ";
	cin>>a;
	cout<<"Enter a number to check power with: ";
	cin>>b;
	for(c=1;c<=a;c++){
		power = 1;
		for(d=1;d<=a;d++){
			power = power * c;
			if(power>b){
				cout<<c<<" ^ "<<d<<" is greater than "<<b<<endl;
				break;
			}
		}
	}
}
