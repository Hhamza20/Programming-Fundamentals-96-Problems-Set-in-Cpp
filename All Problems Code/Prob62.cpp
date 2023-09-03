#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cout<<"Enter Number ";
	cin>>b;
	d=26;
	c=0;
	for(a=1;a<=b;a++){
		
		c=c+d;
		++d;
		
	}
	
	cout<<"Sum = "<<c;
	return 0;
}
