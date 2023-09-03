#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter Starting and ending value ";
	cin>>a>>b;
	int c=a;
	int sum = 0;
	for(a;a<=b;a++){
		sum+=a;
	}
	cout<<"Sum of Numbers between "<<c<<" & "<<b<<" is "<<sum;
	return 0;
}
