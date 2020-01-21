#include<bits/stdc++.h>
using namespace std;

int mindiff(int arr[],int n) {
	int i;
	sort(arr,arr+n);
	int min = INT_MAX;
	for(i=1;i<n;i++) {
		if(arr[i]-arr[i-1] < min) {
			min = arr[i]-arr[i-1];
		}
	}
	return min;
}

int main() {
	int i,n,res;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	res = mindiff(arr,n);
	cout<<res;
	return 0;
}
