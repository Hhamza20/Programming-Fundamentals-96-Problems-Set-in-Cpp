#include<iostream>
using namespace std;
int main(){
	int i,j,k;
	cout<<"Enter a number ";
	cin>>i;
	j=1;
	while(j<i){
		if(i%j==0 && j>5){
			cout<<"First Divisor of "<<i<<" greater than 5 is "<<j;
			break;
		}
		j++;
	}
		return 0;
}
