#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cout<<"Enter 3 Numbers ";
	cin>>a>>b>>c;
	//Smallest of three numbers
	if(a<b && a<c){
		cout<<a<<" is smallest";
	}
	else if(b<a && b<c){
		cout<<b<<" is smallest";
	}
	else{
		cout<<c<<" is smallest";
	}
	cout<<endl<<endl;
	//Largest of three numbers
		if(a>b && a>c){
		cout<<a<<" is largest";
	}
	else if(b>a && b>c){
		cout<<b<<" is largest";
	}
	else{
		cout<<c<<" is largest";
	}
	
	
	cout<<endl;
	//Smallest of four numbers
	cout<<endl<<"Enter four Numbers ";
	cin>>a>>b>>c>>d;
	if(a<b && a<c && a<d){
		cout<<a<<" is smallest";
	}
	else if(b<a && b<c && b<d){
		cout<<b<<" is smallest";
	}
	else if(c<a && c<b && c<d){
		cout<<c<<" is smallest";
	}
	else{
		cout<<d<<" is smallest";
	}
	
	
	cout<<endl<<endl;
	
	//Largest of four numbers
		if(a>b && a>c && a>d){
		cout<<a<<" is largest";
	}
	else if(b>a && b>c && b>d){
		cout<<b<<" is largest";
	}
	else if(c>a && c>b && c>d){
		cout<<c<<" is largest";
	}
	else{
		cout<<d<<" is largest";
	}
	
	
	
	return 0;
}
