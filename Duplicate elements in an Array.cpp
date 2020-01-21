#include<bits/stdc++.h>
using namespace std;

#define Max 10000

void dup(int arr[],int n) {
	int a[Max] = {0};
	for(int i=0;i<n;i++) {
		a[arr[i]]++;
	}
	for(int i=0;i<Max;i++) {
		if(a[i] > 1) {
			cout<<i<<" ";
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
	dup(arr,n);
	return 0;
}

