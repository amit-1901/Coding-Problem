#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fact(int m) {
	int f=1;
	for(int i=1;i<=m;i++)
	f*=i;
	return f;
}
int nCr(int a,int b){
	int neum= fact(a);
	int denom=fact(b) * fact(a-b);
	cout<<neum<<"  "<<denom<<endl;
	return neum/denom;
}

int main() {
	int n,r;
	cin>>n>>r;
	cout<<"answer is : "<<nCr(n,r)<<endl;
	return 0;
}



