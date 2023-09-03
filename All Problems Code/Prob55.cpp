#include<iostream>
using namespace std;
int main(){
	int i,j,result;
	result = 1;
	cout<<"Enter a number ";
	cin>>i;
	cout<<"Enter number power ";
	cin>>j;
	for(int k=1;k<=j;k++){
		result = result *i;
	}
	cout<<i<<" ^ "<<j<<" = "<<result;
	return 0;
}
