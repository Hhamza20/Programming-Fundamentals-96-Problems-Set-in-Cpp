#include<iostream>
using namespace std;
int main(){
	
	int i,j,k,l;
	cout<<"Enter a number ";
	cin>>i;
	for(j=1;j<=i;j++){
		l=1;
		for(k=1;k<=j;k++){
			l=j*j;
		}
		cout<<j<<" ^ "<<j<<" = "<<l<<endl;
		}
	return 0;
}
