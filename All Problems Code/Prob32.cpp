#include<iostream>
using namespace std;
int main(){
	float a,b;
	cout<<"Enter Two Numbers ";
	cin>>a>>b;
	if(b>0 && b<10){
		cout<<a<<" / "<<b<<" = "<<a/b;
	}
	return 0;
}
