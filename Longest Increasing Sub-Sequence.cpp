#include<bits/stdc++.h>
using namespace std;

void LongestIncreasingSubSequence(int arr[],int n,int data[]) {
	
	data[0] = 1;
	for(int i=1;i<n;i++) {
		int num = 0;
		for(int j=i-1;j>=0;j--) {
			if(arr[j] < arr[i]) {
				if(data[j] > num) {
					num = data[j];
				}
			}
		}
		data[i] = num+1;
	}
}
int main() {
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	int data[n] = {0};
	LongestIncreasingSubSequence(arr,n,data);
	for(int i=0;i<n;i++) {
		cout<<data[i]<<" ";
	}
	return 0;
}
