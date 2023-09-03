#include<iostream>
using namespace std;
int main(){
	int i,j;
	cout<<"Enter number for upto display result of odd numbers ";
	cin>>i;
	int sum = 0;
	for(j=1;j<=i;j+=2){
		sum+=j;
	}
	cout<<"Sum of odd numbers upto "<<i<<" = "<<sum;
	return 0;
}
