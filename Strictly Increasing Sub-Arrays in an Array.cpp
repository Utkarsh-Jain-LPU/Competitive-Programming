#include<bits/stdc++.h>
using namespace std;

int inc_arr(int arr[],int n) {
	int i,len=1,count=0;
	for(i=0;i<n-1;i++) {
		if(arr[i+1] > arr[i]) {
			len++;
		}
		else {
			count += (len*(len-1))/2;
			len = 1;
		}
	}
	if(len > 1) {
		count += (len*(len-1))/2;
	}
	return count;
}

int main() {
	int i,n,res;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	res = inc_arr(arr,n);
	cout<<res;
	return 0;
}

