#include<bits/stdc++.h>
using namespace std;

int floor(int arr[],int l,int h,int x) {
	if(x < arr[l]) {
		return -1;
	}
	if(x >= arr[h]) {
		return h;
	}
	int mid = (l+h)/2;
	if(arr[mid] == x) {
		return mid;
	}
	else if(arr[mid] > x) {
		if(mid-1>=l && arr[mid-1]<=x) {
			return mid-1;
		}
		else {
			floor(arr,l,mid-1,x);
		}
	}
	else {
		if(mid+1<=h && arr[mid+1]>x) {
			return mid;
		}
		else {
			floor(arr,mid+1,h,x);
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
	res = floor(arr,0,n-1,x);
	if(res == -1) {
		cout<<"None";
	}
	else {
		cout<<arr[res];
	}
	return 0;
}
