#include<iostream>
using namespace std;
int main(){
	int i,j,k;
	cout<<"Enter a number to run loop upto ";
	cin>>i;
	j=3;
	for(k=1;k<=i;k=k+2){
		if(k%j==0){
			cout<<k<<" is Divisible by "<<j<<endl;
		}
	}
}
