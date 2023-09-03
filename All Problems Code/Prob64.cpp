#include <iostream>
using namespace std;
int main(){
	int i,j,k,l,m;
	cout<<"Enter a number to display Fibonacci series upto it ";
	cin>>i;
	k=0;
	l=1;
	cout<<k<<"\t"<<l<<"\t";
	for(j=1;j<=i;j++){
		
		m=k+l;
		cout<<m<<"\t";
		k=l;
		l=m;
		}
	}
