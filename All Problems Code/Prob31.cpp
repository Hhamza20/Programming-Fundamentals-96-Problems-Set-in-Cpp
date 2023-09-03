#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter Two Numbers ";
	cin>>a>>b;
	if(b==0){
		b=b+5;
		cout<<a<<" + "<<b<<" = "<<a+b;
	}
	else{
		cout<<a<<" + "<<b<<" = "<<a+b;
	}
	return 0;
}
