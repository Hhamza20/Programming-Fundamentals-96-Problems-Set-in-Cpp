#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter Marks from 1 to 100 ";
	cin>>a;
	if(a>89){
		cout<<"A+";
	}
	else if(a>84){
		cout<<"A";
	}
	else if(a>74){
		cout<<"B";
	}
	else if(a>64){
		cout<<"C";
	}
	else if(a>49){
		cout<<"D";
	}
	else{
		cout<<"F";
	}
	return 0;
}
