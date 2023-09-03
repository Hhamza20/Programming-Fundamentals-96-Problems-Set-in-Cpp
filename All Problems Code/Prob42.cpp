#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cout<<"Enter roll no (213,220,250 only one of them)  ";
	cin>>d;
	switch(d){
		case 213:
			cout<<"Ali";
			break;
		case 220:
			cout<<"Ahmed";
			break;
		case 250:
			cout<<"Taha";
			break;
		default:
			cout<<"Wrong roll no.";
	}
	
	
	return 0;
}
