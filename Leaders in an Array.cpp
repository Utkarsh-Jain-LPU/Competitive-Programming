#include<bits/stdc++.h>
using namespace std;

void Leader(int arr[],int n) {
	int i;
	int max = arr[n-1];
	cout<<max<<" ";
	for(i=n-2;i>=0;i--) {
		if(arr[i] > max) {
			max = arr[i];
			cout<<max<<" ";
		}
	}
}

int main() {
	int i,n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	Leader(arr,n);
	return 0;
}

