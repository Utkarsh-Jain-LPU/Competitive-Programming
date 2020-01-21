#include<bits/stdc++.h>
using namespace std;

void segrgate(int arr[],int n,int e) {
	int i=-1;
	for(int j=0;j<n;j++){
		if(arr[j]<e){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	for(i=0;i<n;i++) {
		cout<<arr[i]<<" ";
	}
}

int main() {
	int i,n,e;
	cin>>n>>e;
	int arr[n];
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	segrgate(arr,n,e);
	return 0;
}
