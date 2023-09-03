#include<iostream>
using namespace std;
int main(){
	int a,b,c,square;
	char ch;
	do{
	cout<<"Enter a Number ";
	cin>>a;
	c=a;
	square = 0;
	for(b=1;b<=c;b++){
		square = square+a;
	}
	cout<<"Square of "<<c<<" = "<<square<<endl;
	cout<<"Enter 1 To run Program Again: ";
	cin>>ch;
}
	while(ch=='1');
	
	return 0;
}
