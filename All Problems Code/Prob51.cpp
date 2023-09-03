#include<iostream>
using namespace std;
int main(){
	float a;
	int b;
	cout<<"Enter weight in KG ";
	cin>>a;
	cout<<"Enter 1 For Gram , 2 For Milligram , 3 For Grains & 4 For Pounds ";
	cin>>b;
	if(b==1){
		cout<<"Grams = "<<1000*a;
	}
	else if(b==2){
		cout<<"Milligrams = "<<10000*a;
	}
	else if(b==2){
		cout<<"Milligrams = "<<10000*a;
	}
	else if(b==3){
		cout<<"Grains = "<<1000*a*15.43;
	}
	else if(b==4){
		cout<<"Pounds = "<<2.20*a;
	}
	else{
		cout<<"Invalid Input";
	}	
	return 0;
}
