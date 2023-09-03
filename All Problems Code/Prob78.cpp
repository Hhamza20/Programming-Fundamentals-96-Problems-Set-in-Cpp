#include<iostream>
using namespace std;
int main(){
	int i,j;
	cout<<"Enter Starting and Ending Values ";
	cin>>i>>j;
	cout<<"Numbers Divisble by 5 or 10 are:"<<endl;
	while(i<=j){	
		if(i%5==0 || i%10==0){
			cout<<i<<endl;
		}
		i++;
	}
	return 0;
}
