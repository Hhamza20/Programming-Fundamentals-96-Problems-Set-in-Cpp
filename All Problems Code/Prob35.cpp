#include<iostream>
using namespace std;
int main(){
	float m1,m2,gpa;	
	cout<<"Enter marks for two subjects ";
	cin>>m1>>m2;
	cout<<"Enter GPA ";
	cin>>gpa;
	if((m1>40 && m2>40)||gpa>2){
		cout<<"The student is passed ";
	}
	else{
			cout<<"The student is failed ";
	}
	return 0;
}
