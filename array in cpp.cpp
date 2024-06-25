#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int i,n,a[10];
	cout<<"Enter the number of elements : "<<endl;
	cin>>n;
	for(i=0;i<n;i++) {
		cin>>a[i];
	}
	cout<<"the array is : "<<endl;
	for(i=0;i<n;i++) {
		cout<<a[i]<<" ";
	}
	return 0;
}


