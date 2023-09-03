#include<iostream>
using namespace std;
int main(){
	float marks,gpa;
	cout<<"Enter Marks and GPA ";
	cin>>marks>>gpa;
	if((marks>80 && marks<90)||(gpa>3.7 && gpa<3.8))
	{
		cout<<"Grade is A";
	}
	else{
		cout<<"Grade is not A";
	}
	return 0;
}
