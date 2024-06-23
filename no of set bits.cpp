#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int set_bit_a(int x) {
	int count_1=0;
	while(x!=0) {
		if(x&1)
		count_1++; 
		x>>=1;
	}
	return count_1;
}
int set_bit_b(int y) {
	int count_2=0;
	while(y!=0) {
		if(y&1)
		count_2++; 
		y>>=1;
	}
	return count_2;
}
int main() {
	int a,b;
	cin>>a>>b;
	cout<<set_bit_a(a)<<endl;
	cout<<set_bit_b(b)<<endl;
	cout<<set_bit_a(a)+set_bit_b(b)<<endl;
	return 0;
}


