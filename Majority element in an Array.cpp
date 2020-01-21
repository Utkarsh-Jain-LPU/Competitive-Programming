#include<bits/stdc++.h>
using namespace std;

// Moore's Voting Algorithm
int majority(int arr[],int n) {
	int i,pos,count;
	pos = 0;
	count = 1;
	for(i=1;i<n;i++) {
		if(arr[i] == arr[pos]) {
			count++;
		}
		else {
			count--;
		}
		if(count == 0) {
			pos = i;
			count = 1;
		}
	}
	int c=0;
	for(i=0;i<n;i++) {
		if(arr[i] == arr[pos]) {
			c++;
		}
	}
	if(c > (n/2)) {
		return arr[pos];
	}
	else {
		return -1;
	}
}

int main() {
	int i,n,res;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	res = majority(arr,n);
	if(res == -1) {
		cout<<"None";
	}
	else {
		cout<<res;
	}
	return 0;
}
