#include<iostream>
using namespace std;
int main(){
	
	
	int a,b,c,d,e;
	
	//Odd prime number from first n integers
	cout<<"Enter a number: ";
	cin>>a;
	for(b=2;b<=a;b++){
		d=0;
		for(c=1;c<=b;c++){
			if(b%c==0){
				d++;
			}
		}
	if(d==2){
		if(b%2==1){
			cout<<b<<" is a odd prime number"<<endl;
		}
		}		
	}
		
	cout<<endl<<endl;
	//Odd prime number between two integers
	cout<<"Enter starting number: ";
	cin>>a;
	cout<<"Enter Ending number: ";
	cin>>e;
	for(b=a;b<=e;b++){
		d=0;
		for(c=1;c<=b;c++){
			if(b%c==0){
				d++;
			}
		}
	if(d==2){
		if(b%2==1){
			cout<<b<<" is a odd prime number"<<endl;
		}
		}		
	}
	return 0;
}
