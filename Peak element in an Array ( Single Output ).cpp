#include<bits/stdc++.h>
using namespace std;

int peak(int arr[],int l,int h) {
	int mid;
	mid = (l+h)/2;
	if((mid==l || arr[mid-1]<=arr[mid]) && (mid==h || arr[mid+1]<=arr[mid])) {
		return mid;
	}
	else if(mid>l && arr[mid-1]>arr[mid]) {
		peak(arr,l,mid-1);
	}
	else {
		peak(arr,mid+1,h);
	}
}

int main() {
	int i,n,res;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	res = peak(arr,0,n-1);
	cout<<arr[res];
	return 0;
}

