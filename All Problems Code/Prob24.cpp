#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter obtained marks ranging from 0 to 200 ";
	cin>>a;
	if(a>50){
		cout<<"The student is passed";
	}
	else{
		cout<<"The student is failed";
	}
	return 0;
}
