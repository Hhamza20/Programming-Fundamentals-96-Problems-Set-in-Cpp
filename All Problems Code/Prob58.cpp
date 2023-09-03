#include<iostream>
using namespace std;
int main(){
	int i,j;
	cout<<"Enter number to display even numbers upto that number ";
	cin>>i;
	for(j=2;j<=i;j=j+2){
		cout<<j<<endl;
	}
	return 0;
}
