#include<bits/stdc++.h>
using namespace std;

void rev(int arr[],int l,int r) {
	int start=l,end=r-l+1;
	while(l<r) {
		swap(arr[l],arr[r]);
		l++;
		r--;
	}
	for(int i=start;i<end;i++) {
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
	rev(arr,0,n-1);
	return 0;
}
