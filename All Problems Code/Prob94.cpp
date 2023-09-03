#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a,b,c;
	char ch;
	do{
		cout<<"Enter Two Numbers: ";
		cin>>a>>b;
		c=a+b;
		cout<<"Sum = "<<c<<endl;
		cout<<"Enter 1 to run the program again ";
		cin>>ch;
	}while(ch=='1');
	return 0;
}
