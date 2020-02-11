#include<bits/stdc++.h>
using namespace std;

int main() {
	
	long long t;
	cin>>t;
	while(t--) {
		long long n,p;
		cin>>n>>p;
		bool fg = true;
		long long arr[n] = {0};
		long long x;
		cin>>x;
		arr[0] = x;
		for(long long i=1;i<n;i++) {
			cin>>arr[i];
			if(arr[i]%x != 0) {
				fg = false;
			}
			x=arr[i];
		}
		if(p%arr[n-1]==0 && fg) {
			cout<<"NO"<<endl;
			continue;
		}
		cout<<"YES ";
		long long data[n] = {0};
		for(long long i=n-1;i>=0;i--) {
			if(p > 0) {
				if(p%arr[i] == 0) {
				    long long j = p/arr[i];
				    j--;
				    p -= arr[i]*j;
			    	data[i] = j;
			    }
			    else {
				   long long j = p/arr[i];
				   data[i] = j+1;
				   break;
			    }
			}
			else{
				break;
			}
			
		}
		for(long long i=0;i<n;i++) {
			cout<<data[i]<<" ";
		}
		cout<<endl;
	}
}
