#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int A[n],B[n];
		for(int i=0;i<n;i++) {
			cin>>A[i];
		}
		for(int i=0;i<n;i++) {
			cin>>B[i];
		}
		sort(A,A+n);
		sort(B,B+n);
		int m = 1000000007;
		int res = 0;
		for(int i=0;i<n;i++) {
			int x = (A[i]<B[i])?A[i]:B[i];
			res = (res+x)%m;
		}
		cout<<res<<endl;
	}
	return 0;
}

