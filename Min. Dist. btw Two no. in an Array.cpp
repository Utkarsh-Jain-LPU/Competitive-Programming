#include<bits/stdc++.h>
using namespace std;

int Minimum(int arr[],int n,int p,int q) {
	int i,prev;
	int min = INT_MAX;
	for(i=0;i<n;i++) {
		if(arr[i]==p || arr[i]==q) {
			prev = i;
			break;
		}
	}
	for(i=prev+1;i<n;i++) {
		if(arr[i]==p || arr[i]==q) {
			if(arr[prev] != arr[i]) {
				if(i-prev < min) {
					min = (i-prev);
					prev = i;
				}
			}
			else {
				prev = i;
			}
		}
	}
	return min;
}

int main() {
	int i,n,p,q,res;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	cin>>p>>q;
	res = Minimum(arr,n,p,q);
	cout<<res;
	return 0;
}
