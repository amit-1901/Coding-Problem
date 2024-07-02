#include<iostream>
#include<bits/stdc++.h>
#include<array>
using namespace std;

int main() {
	int arr[6]={1,2,5,8,4,9};
	for(int i=0;i<6;i++)  {  
	    cout<<arr[i]<<endl;
    }
    
	cout<<endl;
	//array stl
	array<int,4>a;//={10,20,30,40};
	int s=a.size();
	cout<<s<<endl;
	for(int i=0;i<s;i++) {
		cout<<"Stl Array is "<<a[i]<<endl;
	}
	
	//some operation of array stl
	
	cout<<"ELe at index - "<<a.at(2)<<endl; 
	
	cout<<"Empty or not - "<<a.empty()<<endl;
	
	cout<<"Front Ele - "<<a.front()<<endl;
	
	cout<<"Last Ele - "<<a.back()<<endl;
	
	return 0;
}


