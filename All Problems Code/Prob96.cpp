#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	do{
		d=0;
		cout<<"Enter a number ";
		cin>>a;
		for(b=2;b<a;b++){
			if(a%b==0){
				d++;
				break;
			}
		}
		if(d==0){
			cout<<a<<" is a prime number "<<endl;
		}
		else{
			cout<<a<<" is a composite number "<<endl;
		}
		cout<<"Enter 1 to run program again ";
		cin>>c;
	}while(c==1);	
	return 0;
}
