#include<cmath>
#include<bits/stdc++.h>
using namespace std;

void closeto0(int arr[],int n) {
	int l,r,lloc,rloc;
	int i,min=INT_MAX;
	sort(arr,arr+n);
	l=0,r=n-1,lloc=l,rloc=r;
	if(n < 2) {
		cout<<"Invalid Input...";
	}
	while(l<r) {
		int sum = arr[l]+arr[r];
		if(abs(sum) < min) {
			min = abs(sum);
			lloc = l;
			rloc = r;
		}
		if(sum < 0) {
			l++;
		}
		else {
			r--;
		}
	}
	cout<<arr[lloc]<<","<<arr[rloc];
}

int main() {
	int i,n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	closeto0(arr,n);
	return 0;
}
