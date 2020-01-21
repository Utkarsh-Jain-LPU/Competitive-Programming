#include<bits/stdc++.h>
using namespace std;

int find_max(int arr[],int n,int k) {
	
	int temp[n] = {0};
	if(arr[0] < k) {
		temp[0] = 0;
	}
	else {
		temp[0] = k;
	}
	for(int i=1;i<n;i++) {
		if(arr[i] < k) {
			temp[i] = 0;
		}
		else {
			temp[i] = temp[i-1]+k;
		}
	}
	int max = 0;
	for(int i=0;i<n;i++) {
		if(temp[i] > max) {
			max = temp[i];
		}
	}
	return max;
}
int Solve(int** arr,int r,int c) {
	
	int max = 0;
	for(int i=0;i<r;i++) {
		int data[c] = {0};
		for(int j=i;j>=0;j--) {
			for(int k=0;k<c;k++) {
				data[k] += arr[j][k];
			}
			int res = find_max(data,c,abs(i-j)+1);
			if(res > max) {
				max = res;
			}
		}
	}
	return max;
}
int main() {
	
	int r,c;
	cin>>r>>c;
	int** arr = new int*[r];
	for(int i=0;i<r;i++) {
		arr[i] = new int[c];
		for(int j=0;j<c;j++) {
			cin>>arr[i][j];
		}
	}
	int res = Solve(arr,r,c);
	cout<<res;
	return 0;
}
