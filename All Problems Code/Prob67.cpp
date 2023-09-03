#include<iostream>
using namespace std;
int main(){
	int i,j,k;
	cout<<"Enter a number ";
	cin>>i;
	for(j=1;j<=i;j++){
		if(j%2){
			cout<<j<<" is a odd number"<<endl;
		}
		else{
				cout<<j<<" is a even number"<<endl;
		}	
	}
	return 0;
}
