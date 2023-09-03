#include<iostream>
using namespace std;
int main(){
	long long i,j,k,Prod;
	Prod=1;
	cout<<"Enter Starting and Ending Value of loop: ";
	cin>>i>>j;
	do{
		if(i%3==0 || i%7==0){
			Prod=Prod*i;
		}
		i++;
	}while(i<=j);
	cout<<endl<<"Product = "<<Prod;
	return 0;
}
