#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e;
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
		cout<<b<<" is a prime number"<<endl;
		}		
	}
	return 0;
}
