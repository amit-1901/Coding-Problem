#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int m) {
	int x=0,y=1,z=0;
	for(int i=2;i<m;i++) {
		z=x+y;
		x=y;
		y=z;	
	}
	return y;
}
int main() {
	int n;
	cin>>n;
	cout<<fibonacci(n)<<endl;
	return 0;
}


