#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter Salary ";
	cin>>a;
	cout<<"Enter 1 for weekly, 2 for bi-monthly & 3 for monthly PAY TYPE ";
	cin>>b;
	switch(b){
		case 1:
			cout<<"Base Pay = "<<a/52;
			break;
		case 2:
			cout<<"Base Pay = "<<a/24;
			break;
		case 3:
			cout<<"Base Pay = "<<a/12;
			break;
		default:
			cout<<"Invalid Number Entered";
	}
	return 0;
}
