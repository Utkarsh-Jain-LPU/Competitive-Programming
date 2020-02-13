#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	int data1[n];
	int data2[n];
	int max;
	if(arr[0] > arr[1]) {
		max = 1;
	}
	else {
		max = 2;
	}
	if(max == 1) {
		int val=1;
		data1[0] = val;
		for(int i=1;i<n;i++) {
			if(arr[i] < arr[i-1]) {
				val++;
			}
			else {
				val=1;
			}
			data1[i] = val;
		}
		val=1;
		data2[n-1] = val;
		for(int i=n-2;i>=0;i--) {
			if(arr[i] < arr[i+1]) {
				val++;
			}
			else {
				val=1;
			}
			data2[i] = val;
		}
	}
	else {
		int val=1;
		data1[0] = val;
		for(int i=1;i<n;i++) {
			if(arr[i] > arr[i-1]) {
				val++;
			}
			else {
				val=1;
			}
			data1[i] = val;
		}
		val=1;
		data2[n-1] = val;
		for(int i=n-2;i>=0;i--) {
			if(arr[i] > arr[i+1]) {
				val++;
			}
			else {
				val=1;
			}
			data2[i] = val;
		}
	}
	int c1=0,c2=0;
	for(int i=0;i<n;i++) {
		if(data1[i] == 1) {
			c1++;
		}
		if(data2[i] == 1) {
			c2++;
		}
	}
	if(c1==n || c2==n) {
		cout<<"No";
		return 0;
	}
	for(int i=0;i<n;i++) {
		if(data1[i]+data2[i] == n+1) {
			cout<<"Yes";
			return 0;
		}
	}
	cout<<"No";
	return 0;
}
