#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--) {
		long n,k;
		cin>>n>>k;
		long arr[n];
		long long int sum=0;
		for(long i=0;i<n;i++) {
			cin>>arr[i];
			sum += arr[i];
		}
		int res = sum%k;
		cout<<res<<endl;
	}
	return 0;
}

