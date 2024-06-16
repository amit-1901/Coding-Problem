#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int SumofArray(int a[],int n) {
	int temp,sum=0;
	for(int i=0;i<n;i++) {
		sum+=a[i];
	}
	cout<<"Sum of elements"<<endl;
	return sum;
}

int DisplayArray(int a[],int n) {
	cout<<"Enter elemetnts : "<<endl;
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	cout<<"the elements : "<<endl;
	for(int i=0;i<n;i++) {
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}

int main() {
	int  arr[100],n;
	cout<<"Enter the no : ";
	cin>>n;
	cout<<DisplayArray(arr,n)<<endl;
	cout<<SumofArray(arr,n)<<endl;
	return 0;
}



