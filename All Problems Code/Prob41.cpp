#include<iostream>
using namespace std;
int main(){
	float a,b;
	cout<<"Enter two numbers ";
	cin>>a>>b;
	if(b>0){
		cout<<a<<" / "<<b<<" = "<<a/b;
	}
	else if(b<0){
		cout<<a<<" * "<<b<<" = "<<a*b;
	}
	else{
		cout<<a<<" + "<<b<<" = "<<a+b;
	}
	
	return 0;
}
