#include<iostream>
using namespace std;
int main(){
	int a,b;
	do{
		cout<<"Enter a number ";
		cin>>a;
		if(a<0){
			cout<<a<<" is negative ";
		}
		else if(a>0){
			cout<<a<<" is positive";
		}
		else{
			cout<<a<<" equal to 0";
		}
		cout<<endl<<"Enter 1 to run program again ";
		cin>>b;
	}while(b==1);
	return 0;
}
