#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a;
	b=a/1000;
	a=a%1000;
	c=a/100;
	a=a%100;
	d=a/10;
	a=a%10;
	if(a==b||a==c||a==d||b==c||b==d||c==d){
		cout<<"yes";
	}
	else{cout<<"no";
	}}
