#include<iostream>
using namespace std;
int main(){
	int i,j,k;
	cout<<"Enter Starting and Ending Values ";
	cin>>i>>j;
	cout<<"Enter Number to check divisibility with ";
	cin>>k;
	if(k==0){
		cout<<"Enter a number other than zero by running the program again ";
	}
	else{
		cout<<"Number between "<<i<<" & "<<j<<" divisible by "<<k<<" are "<<endl;
		for(i;i<=j;i++){
			if(i%k==0){
				cout<<i<<endl;
			}
		}
	}
	return 0;
}
