#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int i,j,result;
	cout<<"Enter a Number ";
	cin>>i;
	cout<<"Enter Target Number ";
	cin>>j;
	int k=0;
	result =1;
	while(result<j){
		k++;
		result = result*i;
	}
	cout<<"Power greater than or equal to "<<j<<" = "<<k;
}
