#include<iostream>
using namespace std;
 int main(){
 	int a,b;
 	cout<<"Enter Two Numbers ";
 	cin>>a>>b;
 	//Larger Number
 	if(a>b){
 		cout<<a<<" is larger than "<<b<<endl;
	 }
	 else{
	 	cout<<b<<" is larger than "<<a<<endl;
	 }
 
	//Smaller Number 
	
	cout<<"Enter Two Numbers again ";
 	cin>>a>>b;	
 	if(a<b){
 		cout<<a<<" is smaller than "<<b;
	 }
 	else{
 		cout<<b<<" is smaller than "<<a;
	 }
 	return 0;
 }
