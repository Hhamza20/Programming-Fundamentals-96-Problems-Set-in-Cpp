#include<iostream>
using namespace std;
int main(){
	float amount,tax_percentage;
	cout<<"Enter Amount & Tax Percentage ";
	cin>>amount>>tax_percentage;
	cout<<"Sales Tax = "<<(amount * tax_percentage)/100<<" Rs";
	
	
	
	return 0;
}
