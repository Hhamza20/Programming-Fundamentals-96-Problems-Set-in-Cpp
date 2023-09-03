#include<iostream>
using namespace std;
int main(){
	int price,width;
	cout<<"Enter cell-phone price an its display width ";
	cin>>price>>width;
	if((price>=20000 && price<=30000)||(width>=5 && width<=8)){
		
		cout<<"The cell-phone is SMART-PHONE";
	}
	else{
		cout<<"The cell-phone is not a SMART-PHONE";
	}
	
	return 0;
}
