#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main() {
	// decimal to binary
	int n;
	cin>>n;
	int ans=0,i=0;
	while(n!=0) {
		int bit=n&1;
		ans+=bit*pow(10,i);
		i++;
		n>>=1;	
	}
	cout<<ans;

//    int n;
//	cin>>n;
//	//n=(-n)*1;
//	//n=-1*n;
//	//int ans=0,i=0;
//	int ans=0,i=0;
//	while(n!=0) {
//		int bit=n&1;
//		ans+=bit*pow(10,i);
//		i++;
//		n>>=1;	
//	}
//	ans=(~ans);
//	cout<<ans;


// binary to decimal
//    int n;
//	cin>>n;
//	int ans=0,i=0;
//	while(n!=0) {
//		int digit=n%2;
//		if(digit==1) {
//		ans+=digit*pow(2,i);	
//		}
//		i++;
//		n/=10;	
//	}
//	cout<<ans;





}


