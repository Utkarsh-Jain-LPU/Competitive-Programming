#include<bits/stdc++.h>
using namespace std;

void Solve(int arr[],int n) {
	
	int i=n-1;
	while(i > 0) {
		if(arr[i] > arr[i-1]) {
			break;
		}
		i--;
	}
	if(i == 0) {
		cout<<"Not Possible"<<endl;
	}
	int loc = i;
	int x = arr[i-1];
	int small = i;
	for(int j=i+1;j<n;j++) {
		if(arr[j]>x && arr[j]<arr[small]) {
			small = j;
		}
	}
	arr[i-1] = arr[small];
	arr[small] = x;
	sort(arr+i,arr+n);
	for(int i=0;i<n;i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main() {
	
	int n,k;
	cin>>n>>k;
	while(k--) {
		int arr[n];
		for(int i=0;i<n;i++) {
			cin>>arr[i];
		}
		Solve(arr,n);
	}
	return 0;
}
