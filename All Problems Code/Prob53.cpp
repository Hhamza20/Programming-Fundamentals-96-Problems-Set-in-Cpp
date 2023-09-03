#include<iostream>
using namespace std;
int main(){
	int i,j,sum;
	sum = 0;
	cout<<"Enter a Number to display sum upto that number ";
	cin>>i;
	for(j=1;j<=i;j++){
		sum+=j;
	}
	cout<<"Sum of numbers upto "<<i<<" is "<<sum<<endl;
	return 0;}
