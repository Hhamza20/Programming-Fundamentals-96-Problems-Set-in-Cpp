#include<iostream>
using namespace std;
int main(){
	int i,j;
	cout<<"Enter number to display odd numbers upto that number ";
	cin>>i;
	for(j=1;j<=i;j=j+2){
		cout<<j<<endl;
	}
	return 0;
}
