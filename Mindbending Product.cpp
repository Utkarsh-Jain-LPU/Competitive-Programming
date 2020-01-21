#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	int data[n] = {1};
	for(int i=0;i<n-1;i++) {
		data[i+1] = data[i]*arr[i];
	}
	int temp = 1;
	for(int i=n-1;i>0;i--) {
		temp = temp*arr[i];
		data[i-1] = data[i-1]*temp;
	}
	for(int i=0;i<n;i++) {
		cout<<data[i]<<" ";
	}
	return 0;
}

