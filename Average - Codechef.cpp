#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int max = arr[n-1]+1;
	int data[max];
	for(int i=0;i<max;i++) {
	    data[i] = -1;
	}
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			double avg = (double)(arr[i]+arr[j])/2;
			if(avg >= max) {
			    break;
			}
			int c = (int)avg;
			if(c == avg) {
			    data[c]++;
			}
		}
	}
	int count=0;
	for(int i=0;i<n;i++) {
		if(data[arr[i]] != -1) {
			count++;
		}
	}
	cout<<count;
	return 0;
}

