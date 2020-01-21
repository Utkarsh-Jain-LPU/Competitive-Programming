#include<bits/stdc++.h>
using namespace std;

void greatest(int arr[],int n) {
	int i,k=0;
	int max = -1;
	for(i=n-1;i>=0;i--) {
		int temp = arr[i];
		arr[i] = max;
		if(temp > max) {
			max = temp;
		}
	}
	for(i=0;i<n;i++) {
		cout<<arr[i]<<" ";
	}
}

int main() {
	int i,n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	greatest(arr,n);
	return 0;
}
