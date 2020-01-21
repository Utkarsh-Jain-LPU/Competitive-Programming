#include<bits/stdc++.h>
using namespace std;

int Solve(int* arr,int n,int k,int count,int** data) {
	
	if(count == 0) {
		return 0;
	}
	if(n < k) {
		return 0;
	}
	if(data[n][count] != -1) {
		return data[n][count];
	}
	int sum = 0;
	for(int i=0;i<k;i++) {
		sum += arr[i];
	}
	int option1 = sum+Solve(arr+k,n-k,k,count-1,data);
	int option2 = Solve(arr+1,n-1,k,count,data);
	int res = max(option1,option2);
	data[n][count] = res;
	return res;
}
int main() {
	
	int n;
	cin>>n;
	int* arr = new int[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	int k;
	cin>>k;
	int** data = new int*[n+1];
	for(int i=0;i<=n;i++) {
		data[i] = new int[4];
		for(int j=0;j<4;j++) {
			data[i][j] = -1;
		}
	}
	int res = Solve(arr,n,k,3,data);
	cout<<res;
	return 0;
}
