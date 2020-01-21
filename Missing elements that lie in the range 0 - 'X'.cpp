#include<bits/stdc++.h>
using namespace std;

void missing(int arr[],int n,int r) {
	int a[r+1] = {0};
	for(int i=0;i<n;i++) {
		if(arr[i] <= r) {
			a[arr[i]] = 1;
		}
	}
	int i=0,j;
	while(i <= r) {
		if(a[i] == 0) {
			j = i+1;
			while(j<=r && a[j]==0) {
				j++;
			}
			(i == j-1) ? cout<<i<<endl : cout<<i<<"-"<<j-1<<endl;
			i = j;
		}
		else {
			i++;
		}
	}
}

int main() {
	int i,n,r;
	cin>>n>>r;
	int arr[n];
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	missing(arr,n,r);
	return 0;
}

