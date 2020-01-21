#include<bits/stdc++.h>
using namespace std;

#define Max 10000

void sum(int arr[],int n,int x) {
	int a[Max] = {0};
	for(int i=0;i<n;i++) {
		int temp = x-arr[i];
		if(a[temp] == 1) {
			cout<<arr[i]<<","<<temp<<endl;
		}
		else {
			a[arr[i]] = 1;
		}
	}
}

int main() {
	int i,n,x;
	cin>>n>>x;
	int arr[n];
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	sum(arr,n,x);
	return 0;
}
