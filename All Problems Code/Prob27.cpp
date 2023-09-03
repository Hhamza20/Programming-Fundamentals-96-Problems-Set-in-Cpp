#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter two numbers ";
	cin>>a>>b;
	if((a+b)>100){
		cout<<a<<" * "<<b<<" = "<<a*b;
	}	
	else{
			cout<<a<<" / "<<b<<" = "<<a/b;
	}
	return 0;
}
