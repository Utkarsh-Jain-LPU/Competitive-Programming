#include<bits/stdc++.h>
using namespace std;

int palindrome(int arr[],int n) {
	int c=0,l=0,r=n-1;
	while(l<=r) {
		if(arr[l] == arr[r]) {
			l++;
			r--;
		}
		else if(arr[l] > arr[r]) {
			arr[r-1] = arr[r-1]+arr[r];
			r--;
			c++;
		}
		else {
			arr[l+1] = arr[l]+arr[l+1];
			l++;
			c++;
		}
	}
	return c;
}

int main() {
	int i,n,res;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	res = palindrome(arr,n);
	cout<<res;
	return 0;
}
