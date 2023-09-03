#include<iostream>
using namespace std;
int main(){
	int i,j,sum;
	sum=0;
	cout<<"Enter starting and ending value ";
	cin>>i>>j;
	for(i;i<=j;i++){
		if(i%2==0){
			sum=sum+i;
		}
	}
	cout<<"Sum = "<<sum;
	return 0;
}
