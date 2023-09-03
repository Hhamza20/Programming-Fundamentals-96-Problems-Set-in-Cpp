#include<iostream>
using namespace std;
int main(){
	int i,j,k;
	cout<<"Enter a number ";
	cin>>i;
	k=10;
	j=2;
	while(j<i){
		if(i%j==0){
			k=20;
			break;
		}
		j++;
	}
	
	if(k==10){
		cout<<i<<" is a prime number"<<endl;
	}
	else{
		cout<<i<<" is a composite number"<<endl;
	}
	return 0;
}
