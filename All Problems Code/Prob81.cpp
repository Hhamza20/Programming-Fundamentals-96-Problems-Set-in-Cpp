#include<iostream>
using namespace std;
int main(){
	int i,j,k;
	cout<<"Enter a number to run loop upto ";
	cin>>i;
	cout<<"Enter a number to check divisibility with ";
	cin>>j;
	k=j*j*j;
	if(j!=0){
		cout<<"Numbers until "<<i<<" which are divisible by "<<j<<" and its Cube "<<k<<" are "<<endl;
		for(int l=1;l<=i;l++){
		if(l%j==0 && l%k==0){
			cout<<l<<endl;
		}
	}
	}
	else{
		cout<<"Enter a divisor other than 0 by running program again!";
	}
	return 0;
}
