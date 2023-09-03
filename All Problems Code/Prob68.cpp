#include<iostream>
using namespace std;
int main(){
	int i,j,k;
	cout<<"Enter a number to run loop upto ";
	cin>>i;
	cout<<"Enter Diviser Number ";
	cin>>j;
	for(k=1;k<=i;k++){
		if(k%j==0){
			cout<<k<<" is Divisible by "<<j<<endl;
		}
	}
	}
