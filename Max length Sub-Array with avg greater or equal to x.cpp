#include<bits/stdc++.h>
using namespace std;

int maxsubarray(int arr[],int n,int x) {
	
	double sum=0;
	double data[n][n] = {0};
	for(int i=0;i<n;i++) {
		sum = 0;
		for(int j=i;j<n;j++) {
			sum += arr[j];
			double val = sum/(j-i+1);
			data[i][j] = val;
		}
	}
	int ans=0;
	for(int i=(n-1);i>=0;i--) {
		for(int j=0;j<n;j++) {
			if(data[j][i] >= x) {
				ans = (i-j+1);
				return ans;
			}
		}
	}
	return ans;
}
int main() {
	
	int n,x;
	cin>>n>>x;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	int res = maxsubarray(arr,n,x);
	cout<<res;
	return 0;
}
