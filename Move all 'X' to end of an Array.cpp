#include<bits/stdc++.h>
using namespace std;

void moveall0(int arr[],int n,int x) {
	int i,loc=n;
	for(i=(n-1);i>=0;i--) {
		if(arr[i] == x) {
			loc--;
			swap(arr[i],arr[loc]);
		}
	}
	for(i=0;i<n;i++) {
		cout<<arr[i]<<" ";
	}
}

int main() {
	int i,n,x;
	cin>>n>>x;
	int arr[n];
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	moveall0(arr,n,x);
	return 0;
}
