#include<iostream>
using namespace std;
int main(){
	int i,j;
	cout<<"Enter a number ";
	cin>>i;
	cout<<"Enter maximum number to show table upto ";
	cin>>j;
	for(int k=1;k<=j;k++){
		cout<<i<<" * "<<k<<" = "<<i*k<<endl;
	}	
	return 0;
}
