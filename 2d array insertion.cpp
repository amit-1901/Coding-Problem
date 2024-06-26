#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int m,n,a[m][n];
	cout<<"Enter the no of row and coloum : "<<endl;
	cin>>m>>n;
	cout<<"Enter the m*n elements"<<endl;
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			cout<<"The elements of array ["<<i<<"]["<<j<<"] : ";
			cout<<a[i][j]<<endl;
		}
	}
	return 0;
}


