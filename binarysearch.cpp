#include<bits/stdc++.h>
using namespace std;

int binarysearch(int a[],int n,int key) {
	int start=0,end=n-1;
	int mid=start+(end-start)/2;
	while(start<=end) {
		if(a[mid]==key)
		return mid;
//		going to left part
		if(a[mid]>key) {
			end=mid-1;
		} else {
//			going to right part
			start=mid+1;
		}
//		set mid 
		mid=start+(end-start)/2;	
	}
//	not found
	return -1;
}

int main() {
	int even[6]={2,4,6,8,10,22};
	int odd[5]={1,3,5,7,9};
	int indexeven=binarysearch(even,6,26);
	cout<<"index of 22 is -> "<<indexeven<<endl;
	int indexodd=binarysearch(odd,5,7);
	cout<<"index of 3 is -> "<<indexodd<<endl;
	return 0;
}


