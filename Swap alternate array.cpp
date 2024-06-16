#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void SwapAlterArray(int arr[],int n) {
	for(int i=0;i<n;i+=2) {
		if(i+1<n) {
			swap(arr[i],arr[i+1]);
		}
	}
}

void DisplayArray(int arr[],int size) {
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main() {
	int a[100],n;
	cout<<"Enter the no : "<<endl;
	cin>>n;
	cout<<"Enter the elements : "<<endl;
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	cout<<"Thae array is : "<<endl;
	DisplayArray(a,n);
	SwapAlterArray(a,n);
	cout<<"Thae alternate swaped array is : "<<endl;
	DisplayArray(a,n);
	return 0;
}


