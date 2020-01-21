#include<bits/stdc++.h>
using namespace std;

int Missing(int arr[],int n) {
	int i;
	int x1 = arr[0];
	int x2 = 1;
	for(i=1;i<n;i++) {
		x1 = x1^arr[i];
	}
	for(i=2;i<=(n+1);i++) {
		x2 = x2^i;
	}
	return x1^x2;	
}

int main() {
	int i,n,res;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	res = Missing(arr,n);
	cout<<res;
	return 0;
}
