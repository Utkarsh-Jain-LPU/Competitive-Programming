#include<bits/stdc++.h>
using namespace std;

#define Max 10000

void freq(int arr[],int n) {
	int i,a[Max] = {0};
	for(i=0;i<n;i++) {
		a[arr[i]]++;
	}
	for(i=0;i<Max;i++) {
		if(a[i] > 0) {
			cout<<i<<" -> "<<a[i]<<endl;
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
	freq(arr,n);
	return 0;
}
