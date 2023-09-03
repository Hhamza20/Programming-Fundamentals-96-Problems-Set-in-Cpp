#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter a number ";
	cin>>a;
	if(a>0){
		for(b=1;b<=10;b++){
			cout<<a<<" * "<<b<<" = "<<a*b<<endl;
		}
	}
	else{
		cout<<"Run program again and enter number greater than zero!!!";
	}
	
}
