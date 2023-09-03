#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter Two Numbers ";
	cin>>a>>b;
	if((a-b)>10){
		cout<<a<<" / "<<b<<" = "<<a/b;
	}
	else{
			cout<<a<<" * "<<b<<" = "<<a*b;
	}
	
	return 0;
}
