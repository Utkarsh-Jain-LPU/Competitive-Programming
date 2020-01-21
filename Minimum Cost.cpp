#include<bits/stdc++.h>
using namespace std;

#define MAX 100

int min = INT_MAX;
int solve(int arr[MAX][MAX],int i,int j,int m,int n,int cur) {
	
	if(i==m-1 && j==n-1) {
		cur += arr[i][j];
		if(cur < ::min) {
			::min = cur;
		}
		cur -= arr[i][j];
		return cur;
	}
	if(i==m || j==n) {
		return cur;
	}
	cur += arr[i][j];
	cur = solve(arr,i,j+1,m,n,cur);
	cur = solve(arr,i+1,j+1,m,n,cur);
	cur = solve(arr,i+1,j,m,n,cur);
	cur -= arr[i][j];
	return cur;
}
int main() {
	
	int m,n;
	cin>>m>>n;
	int arr[MAX][MAX];
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			cin>>arr[i][j];
		}
	}
	solve(arr,0,0,m,n,0);
	cout<<::min;
	return 0;
}
