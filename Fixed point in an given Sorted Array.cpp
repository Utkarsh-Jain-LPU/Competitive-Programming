#include<bits/stdc++.h>
using namespace std;

int fixed(int arr[],int l,int h) {
	int mid;
	mid = (l+h)/2;
	if(arr[mid] == mid) {
		cout<<arr[mid]<<" ";
	}
	else if(arr[mid] < mid) {
		fixed(arr,mid+1,h);
	}
	else {
		fixed(arr,l,mid-1);
	}
}

int main() {
	int i,n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	fixed(arr,0,n-1);
	return 0;
}

