/*
	Name: 
	Copyright: 
	Author: 
	Date: 07/08/22 23:38
	Description: 
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getMax(int a[],int n) {
	int max=INT_MIN;
	for(int i=0;i<n;i++) {
		if(a[i]>max) {
			max=a[i];
		}
	}
	return max;
}

int getMin(int a[],int n) {
	int mini=INT_MAX;
	for(int i=0;i<n;i++) {
		mini=min(a[i],mini);
//		if(a[i]<min) {
//			min=a[i];
//		}
	}
	return mini;
}

int main() {
	int n,a[100];
	cout<<"Enter the size of array : "<<endl;
	cin>>n;
	cout<<"Ente the elements of array : "<<endl;
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	cout<<"The array is : ";
	for(int i=0;i<n;i++) {
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"MAX value is : "<<getMax(a,n)<<endl;
	cout<<"MIN value is : "<<getMin(a,n);
	return 0;
}


