#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;

	
//	int i=1;
//	while(i<=n) {
//		int j=1;
//		while(j<=n){
//			cout<<j<<"*";
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
// O/P
//   3
//1*2*3*
//1*2*3*
//1*2*3*
	

//    int i=1;
//    int count=1;
//	while(i<=n) {
//		int j=1;
//		while(j<=n){
//			cout<<count;
//			count++;
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
//    O/P - 
//    3
//   123
//   456
//   789	


//	int i=1;
//	while(i<=n) {
//		int j=1;
//		while(j<=i){
//			cout<<j<<"*"<<" ";
//			j++;
//		}
//		cout<<endl;
//		i++;
//	} 
//	O/P-
// 3
//1*
//1* 2*
//1* 2* 3*


//	int i=1;
//	while(i<=n) {
//		int j=1;
//		while(j<=n){
//			cout<<n-j+1<<"*"<<" ";
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
//	O/P
//	3
//3* 2* 1*
//3* 2* 1*
//3* 2* 1*


//   int i=1;
//   int count=1;
//	while(i<=n) {
//		int j=1;
//		while(j<=i){
//			cout<<count<<" ";
//			count++;
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
//  O/P-
//  3
//1
//2 3
//4 5 6
  
//^^^^^
//	int i=1;
//    //int count=i;
//	while(i<=n) {
//		int j=1;
//		//int count=i;
//		while(j<=i){
//			cout<<i+j-1<<" ";
//			//count++;
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}


//	int i=1;
//	while(i<=n) {
//		int j=1;
//		while(j<=i){
//			cout<<i-j+1<<" ";
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
//	O/P-
//	3
//1
//2 1
//3 2 1


//	int i=1;
//	while(i<=n)
//	{
//		int j=1;
//		while(j<=n)
//		{
//			cout<<char('A'+i-1)<<" ";
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
//	O/P-
//	3
//A A A
//B B B
//C C C
		
	
//	int i=1;
//	while(i<=n)
//	{
//		int j=1;
//		while(j<=n)
//		{
//			cout<<char('A'+j-1)<<" ";
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
//	O/P-
//	3
//A B C
//A B C
//A B C

	
//	int i=1;
//	char ch='A';
//	while(i<=n)
//	{
//		int j=1;
//		while(j<=n)
//		{
//			cout<<ch<<" ";
//			ch++;
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
//	O/P-
//	3
//A B C
//D E F
//G H I
	
	
//	int i=1;
//	while(i<=n)
//	{
//		int j=1;
//		while(j<=n)
//		{
//			cout<<char('A'+i+j-2)<<" ";
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
//	O/P-
//	3
//A B C
//B C D
//C D E
		
	
//	int i=1;
//	while(i<=n) 
//	{
//		int j=1;
//		while(j<=i)
//		{
//			cout<<char('A'+i-1)<<" ";
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
//	O/p-
//	4
//A
//B B
//C C C
//D D D D

	
//    int i=1;
//    char ch='A';
//	while(i<=n) 
//	{
//		int j=1;
//		while(j<=i)
//		{
//			cout<<ch<<" ";
//			//cout<<char('A'+i+j-2)<<" ";
//			ch++;
//			j++;
//		}
//		cout<<endl;
//		i++;
//	} 
//	o/p-
//	4
//A
//B C
//D E F
//G H I J

	
//	int i=1;
//    //char ch='A';
//	while(i<=n) 
//	{
//		int j=1;
//		while(j<=i)
//		{
//			//cout<<ch<<" ";
//			cout<<char('A'+n-i+j-1)<<" ";
//			//ch++;
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
//	o/p-
//	4
//D
//C D
//B C D
//A B C D
	
	
//	int i=1;
//    //char ch='A';
//	while(i<=n) 
//	{
//		int j=1;
//		while(j<=i)
//		{
//			//cout<<ch<<" ";
//			cout<<char('A'+n-i+j-1)<<" ";
//			//ch++;
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
//	o/p-
//	4
//D
//C D
//B C D
//A B C D

	
//	int i=1;
//	while(i<=n) 
//	{
//		int space=n-i;
//		while(space)
//		{
//			cout<<" ";
//			space--;
//		}
//		int j=1;
//		while(j<=i)
//		{
//			cout<<"*";
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
//	o/p-
//	4
//   *
//  **
// ***
//****

	
//	int i=1;
//	while(i<=n) 
//	{
//		int star=n-i+1;
//		while(star--)
//		{
//			cout<<"*";
//			//star--;
//		}
//		int j=1;
//		while(j<=n)
//		{
//			cout<<" ";
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
//	o/p-
//	4
//****
//***
//**
//*
	
	
//	int i=1;
//	while(i<=n) 
//	{
//		int space=i-1;
//		while(space--)
//		{
//			cout<<" ";
//		}
//		int star=n-i+1;
//		while(star--)
//		{
//			cout<<"*";
//		}
//		cout<<endl;
//		i++;
//	} 
//	o/p-
//	4
//****
// ***
//  **
//   *	
		
	
//	int i=1;
//	while(i<=n)
//	{
//		int space=i-1;
//		while(space--)
//		{
//			cout<<" ";
//		}
//		int j=n-i+1;
//		while(j--)
//		{
//			cout<<i;
//		}
//		cout<<endl;
//		i++;
//	}
//	o/p-
//	4
//1111
// 222
//  33
//   4


//	int i=1;
//	int count=1;
//	while(i<=n)
//	{
//		int space=n-i;
//		while(space--)
//		{
//			cout<<" ";
//		}
//		int j=1;
//		while(j<=i)
//		{
//			//cout<<i;
//			cout<<count;
//			count++;
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
//	o/p-1          
//	4
//   1
//  22
// 333
//4444
// o/p-2
//4
//   1
//  23
// 456
//78910

	
//	int i=1;
//	while(i<=n)
//	{
//		int space=n-i;
//		while(space--)
//		{
//			cout<<" ";
//		}
//		int j=1;
//		while(j<=i)
//		{
//			cout<<j;
//			j++;
//		}
//		int k=i-1;
//		while(k)
//		{
//			cout<<k;
//			k--;
//		}
//		cout<<endl;
//		i++;
//	} 
//	o/p-4
//   1
//  121
// 12321
//1234321

	
	int i=1;
	while(i<=n)
	{
		int j=1;
		while(j<=n-i+1)
		{
			cout<<j;
			j++;
		}
		int star=2*(i-1);
		while(star)
		{
			cout<<"*";
			star--;
		}
		int k=n-i+1;
		while(k>=1)
		{
			cout<<k;
			k--;
		}
		cout<<endl;
		i++;
	}
//	o/p-
//	5
//1234554321
//1234**4321
//123****321
//12******21
//1********1
	
		
	return 0;
}












