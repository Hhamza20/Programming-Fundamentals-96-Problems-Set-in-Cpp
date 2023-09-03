#include<iostream>
using namespace std;
int main(){
	float a;
	int b;
	cout<<"Enter Temperature ";
	cin>>a;
	cout<<"Enter conversion type: 1 For Celcius , 2 For Fahrenheit , 3 For Kelvin & 4 For Rankie ";
	cin>>b;
	switch(b){
		case 1:
			cout<<"Temperature in Celcius = "<<32 + (a*1.8);
			break;
		case 2:
			cout<<"Temperature in Fahrenheit = "<<(a-32)/1.8;
			break;
		case 3:
			cout<<"Temperature in Kelvin = "<<273.15+a;
			break;
		case 4:
			cout<<"Temperature in Rankie = "<<a*5/9;
			break;
		default:
			cout<<"Invalid Number Entered";						
	}
	return 0;
}
