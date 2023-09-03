#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter a number to display table upto ";
	cin>>a;
	for(b=1;b<=a;b++){
		cout<<"\"Table of "<<b<<"\""<<endl;
		for(c=1;c<=10;c++){
			cout<<b<<" * "<<c<<" = "<<b*c<<endl;
		}
		cout<<endl<<endl;
	}
	return 0;
}
