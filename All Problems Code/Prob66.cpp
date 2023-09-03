#include<iostream>
using namespace std;
int main(){
	long long i,j,k;
	cout<<"Enter a Number to Display Series ";
	cin>>i;
	k=4;
	for(j=1;j<=i;j++){
		
		cout<<1<<"/"<<k<<"\t";
		k=k*4;
	}
	
	cout<<endl<<endl;
	k=3;
	for(j=1;j<=i;j++){
		cout<<1<<"/"<<k<<"\t";
		k=k*3;
	}
	
	cout<<endl<<endl;
	k=5;
	for(j=1;j<=i;j++){
		cout<<1<<"/"<<k<<"\t";
		k=k*5;
	}
	
	return 0;
}
