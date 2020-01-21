#include<bits/stdc++.h>
using namespace std;

int maxdiff(int arr[],int n) {
	int i,min = arr[0],max = 0;
	for(i=1;i<n;i++) {
		if(arr[i] > min) {
			int diff = arr[i]-min;
			if(diff > max) {
				max = diff;
			} 
		}
		else {
			min = arr[i];
		}
	}
	return max;
}

int main() {
	int i,n,res;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	res = maxdiff(arr,n);
	cout<<res;
	return 0;
}
