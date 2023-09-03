#include<iostream>
using namespace std;
int main(){
	float hours;
	cout<<"Enter no. of Hours ";
	cin>>hours;
	
	//Minutes
	cout<<"No. of Minutes in 10 hours = "<<hours * 60<<" minutes"<<endl;
	
	//Seconds
	cout<<"No. of Seconds in 10 hours = "<<hours * 60*60<<" seconds"<<endl;
	
	return 0;
}
