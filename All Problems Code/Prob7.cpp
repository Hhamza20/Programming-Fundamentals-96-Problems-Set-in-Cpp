#include<iostream>
using namespace std;
int main(){
	float marks,total,percentage;
	cout<<"Enter Obtained & Total marks ";
	cin>>marks>>total;
	percentage = (marks/total) * 100;
	cout<<"Marks Percentage = "<<percentage<<" %";
	
	
	return 0;
}
