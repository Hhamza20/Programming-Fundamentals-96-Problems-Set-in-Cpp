#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter City Code(54000 , 55000 , 52000 , 54500 ONLY ENTER THESE) ";
	cin>>a;
	switch(a){
		case 54000:
			cout<<"Lahore";
			break;
		case 55000:
			cout<<"Faislabad";
			break;
		case 52000:
			cout<<"Peshawar";
			break;
		case 54500:
			cout<<"Islamabad";
			break;
		default:
			cout<<"Invalid City Code";				
	}
	
	
	
	return 0;
}
