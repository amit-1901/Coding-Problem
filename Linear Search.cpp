#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool LinearSearch(int arr[],int size,int key) {
	for(int i=0;i<size;i++) {
		if(arr[i]==key) {
			cout<<"ele is found at index - "<<i<<endl;
			return 1;
		}
	}
	cout<<"ele is not present at any index"<<endl;
	return 0;
}

int main() {
	int a[100],n,ele;
	cout<<"Enter the number of elements : "<<endl;
	cin>>n;
	cout<<"Enter the array elements : "<<endl;
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	cout<<"Enter element which you want to search - "<<endl;
	cin>>ele;
	bool found=LinearSearch(a,n,ele);
//	if(found) {
//		cout<<"ele is present ";
//	} else {
//		cout<<"ele is not present ";
//	}
	return 0;
}


