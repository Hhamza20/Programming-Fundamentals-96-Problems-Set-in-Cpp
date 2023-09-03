#include<iostream>
using namespace std;
int main(){
	int i,j,fact;
	fact = 1;
	cout<<"Enter a Number to display its Factorial ";
	cin>>i;
	for(j=1;j<=i;j++){
		fact= fact*j;
	}
	cout<<"Factorial of "<<i<<" = "<<fact;
	return 0;
}
