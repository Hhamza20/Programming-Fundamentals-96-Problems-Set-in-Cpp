#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
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
		cout<<b<<" is a prime number"<<endl;
		}		
	}
	return 0;
}
