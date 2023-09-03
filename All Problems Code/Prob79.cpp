#include<iostream>
using namespace std;
int main(){
	long long i,j;
	cout<<"Enter a Number ";
	cin>>i;
	j=1;
	while(j<=i){
		if(j%2==0 && j%8==0){
			cout<<j<<" is divisible by 2 & its cube"<<endl;
		}
		j++;
	}
	return 0;
}
