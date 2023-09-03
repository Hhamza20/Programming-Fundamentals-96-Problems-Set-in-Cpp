#include<iostream>
using namespace std;
int main(){
	float a,b;
	int c;
	cout<<"Enter Two Numbers ";
	cin>>a>>b;
	cout<<"Enter 1 For Addition , 2 For Subtraction , 3 For Multiplication & 4 For Division";
	cin>>c;
	switch(c){
		case 1:
			cout<<a<<" + "<<b<<" = "<<a+b;
			break;
		case 2:
			cout<<a<<" - "<<b<<" = "<<a-b;
			break;
		case 3:
			cout<<a<<" * "<<b<<" = "<<a*b;
			break;
		case 4:
			cout<<a<<" / "<<b<<" = "<<a/b;
			break;
		default:
			cout<<"Invalid Input";
	}
	return 0;
}
