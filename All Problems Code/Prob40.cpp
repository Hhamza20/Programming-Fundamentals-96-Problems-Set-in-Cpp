#include<iostream>
using namespace std;
int main(){
	int salary,pay;
	cout<<"Enter Salary and Pay-Grade ";
	cin>>salary>>pay;
	if((salary>80000 && salary<100000)||(pay>=20 && pay<=22)){
		
		cout<<"The employee is EXECUTIVE";
	}
	else{
			cout<<"The employee is NOT EXECUTIVE";
	}
	return 0;
}
