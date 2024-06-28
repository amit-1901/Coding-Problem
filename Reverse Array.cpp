#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void ReverseArray(int arr[],int size) {
	int temp=0;
	int i=0,j=size-1;
	while(i<=j) {
	 temp=arr[j];
 	 arr[j]=arr[i];
	 arr[i]=temp;
     //swap(arr[i],arr[j]);
	 i++;
	 j--;
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
	cout<<"Enter the size of array : "<<endl;
	cin>>n;
	cout<<"Enter array elements : "<<endl;
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	cout<<"The array is : "<<endl;
    DisplayArray(a,n);
    ReverseArray(a,n);
	cout<<"The reverse array is : "<<endl;
	DisplayArray(a,n);
	return 0;
}


