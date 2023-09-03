#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter marks for two subjects ";
	cin>>a>>b;
	
	// A Part
	if(a>40 && b>40){
		cout<<"The student is passed"<<endl;
	}
	else{
		cout<<"The student is failed"<<endl;
	}
	
	
	//B Part
	if(a>40 || b>40){
		cout<<"The student is passed"<<endl;
	}
	else{
		cout<<"The student is failed"<<endl;
	}
	
}
