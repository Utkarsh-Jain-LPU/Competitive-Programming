#include<bits/stdc++.h>
using namespace std;

int bitonic(int arr[],int n) {
	int i,c=1,inc[n],dec[n];
	inc[0]=c,dec[n-1]=c;
	for(i=1;i<n;i++) {
		if(arr[i] > arr[i-1]) {
			c++;
			inc[i] = c;
		}
		else {
			c = 1;
			inc[i] = c;
		}
	}
	c = 1;
	for(i=(n-2);i>=0;i--) {
		if(arr[i] > arr[i+1]) {
			c++;
			dec[i] = c;
		}
		else {
			c = 1;
			dec[i] = c;
		}
	}
	int max = INT_MIN;
	for(i=0;i<n;i++) {
		if((inc[i]+dec[i]-1) > max) {
			max = (inc[i]+dec[i]-1);
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
	res = bitonic(arr,n);
	cout<<res;
	return 0;
}
