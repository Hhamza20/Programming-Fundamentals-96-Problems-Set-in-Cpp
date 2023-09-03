#include <iostream>
using namespace std;

int main() {
  int a,b,c;
  cout<<"Enter a number ";
  cin>>a;
  c=1;
  for(b=0;b<=a;b++){
  	c=c+b;
  	cout<<c<<"\t";
   }
   return 0;
}

