#include<iostream>
using namespace std;
int main(){
	int i,j,k,l,m;
	cout<<"Enter starting and ending number ";
	cin>>i>>m;
	k=0;
	l=0;
	for(j=i;j<=m;j++){
		if(j%2){
			k++;
		}
		else{
				l++;
		}	
	}
	
	cout<<"Odd numbers between "<<i<<" & "<<m<<" are "<<k<<endl;
	cout<<"Even numbers between "<<i<<" & "<<m<<" are "<<l<<endl;
	return 0;
}
