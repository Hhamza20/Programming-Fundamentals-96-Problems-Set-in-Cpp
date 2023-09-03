#include<iostream>
using namespace std;
int main(){
	int salary,pay;
	cout<<"Enter Salary and Pay-Grade ";
	cin>>salary>>pay;
	if((salary>50000 && salary<80000)||(pay>=20 && pay<=22)){
		
		cout<<"The employee is MANAGER";
	}
	else{
			cout<<"The employee is NOT MANAGER";
	}
	
	return 0;
}
