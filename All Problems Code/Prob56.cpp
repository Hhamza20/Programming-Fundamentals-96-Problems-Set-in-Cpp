#include<iostream>
using namespace std;
int main(){
	int i,j;
	cout<<"Enter number for upto display result of even numbers ";
	cin>>i;
	int sum = 0;
	for(j=2;j<=i;j+=2){
		sum+=j;
	}
	cout<<"Sum of even numbers upto "<<i<<" = "<<sum;
	return 0;
}
