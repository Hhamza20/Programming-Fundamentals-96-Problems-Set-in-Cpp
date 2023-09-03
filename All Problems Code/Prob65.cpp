#include<iostream>
using namespace std;
int main(){
	float i,j,k;
	cout<<"Enter a Number ";
	cin>>i;
	k=0;
	for(j=1;j<=i;j++){
		k=k+1/j;
	}
	cout<<"Integers Sum = "<<k<<endl<<endl;
	k=0;
	for(j=1;j<=i;j+=2){
		k=k+1/j;
	}
	cout<<"Odd Number Sum = "<<k<<endl<<endl;
	
	k=0;
	
	for(j=2;j<=i;j+=2){
		k=k+1/j;
	}
	cout<<"Even Number Sum = "<<k<<endl<<endl;
	
	
	return 0;
}
