#include<iostream>
using namespace std;
int main(){
		int a,b,c,d,e;
	cout<<"Enter a number: ";
	cin>>a;
	e=0;
	for(b=2;;b++){
		d=0;
		for(c=1;c<=b;c++){
			if(b%c==0){
				d++;
			}
		}
	if(d==2){
		cout<<b<<" is a prime number"<<endl;
		e++;
		if(e==a){
			break;
		}
		}		
	}
	return 0;
}
