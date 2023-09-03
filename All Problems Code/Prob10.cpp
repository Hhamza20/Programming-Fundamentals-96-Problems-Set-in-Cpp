#include<iostream>
using namespace std;
int main(){
	float m,v,r,f;
	cout<<"Enter Mass , Velocity & Radius ";
	cin>>m>>v>>r;
	f=(m*v*v)/r;
	cout<<"Centripetal Force F = "<<f<<" units";
	
	
	return 0;
}
