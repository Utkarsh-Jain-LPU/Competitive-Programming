#include<bits/stdc++.h>
using namespace std;

int ceil(int arr[],int f,int l,int x) {
	if(x <= arr[f]) {
		return f;
	}
	if(x > arr[l]) {
		return -1;
	}
	int mid = (f+l)/2;
	if(arr[mid] == x) {
		return mid;
	}
	else if(arr[mid] > x) {
		if(mid-1>=f && arr[mid-1]<x) {
			return mid;
		}
		else {
			ceil(arr,f,mid-1,x);
		}
	}
	else {
		if(mid+1<=l && arr[mid+1]>=x) {
			return mid+1;
		}
		else {
			ceil(arr,mid+1,l,x);
		}
	}
}

int main() {
	int i,n,x,res;
	cin>>n>>x;
	int arr[n];
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	sort(arr,arr+n);
	res = ceil(arr,0,n-1,x);
	if(res == -1) {
		cout<<"None";
	}
	else {
		cout<<arr[res];
	}
	return 0;
}

