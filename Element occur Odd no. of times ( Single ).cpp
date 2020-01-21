#include<bits/stdc++.h>
using namespace std;

int odd_num(int arr[],int n) {
	int i;
	int data = arr[0];
	for(i=1;i<n;i++) {
		data = data^arr[i];
	}
	return data;
}

int main() {
	int i,n,res;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	res = odd_num(arr,n);
	cout<<res;
	return 0;
}
