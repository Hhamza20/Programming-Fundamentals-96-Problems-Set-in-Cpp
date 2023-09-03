#include<iostream>
using namespace std;
int main(){
	int price,eng;
	cout<<"Enter car price in million and Engine capacity in cc ";
	cin>>price>>eng;
	if((price>1000000 && price<2000000)||(eng>1000 && eng<1500)){
	cout<<"The car is middle sized";	
		
	}
	else{
		cout<<"The car is not middle sized";
	}
	return 0;
}
