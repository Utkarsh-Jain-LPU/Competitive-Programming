#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t,n;
	cin>>t;
	while(t--) {
		cin>>n;
		int ans = 1;
		while(ans <= n) {
			ans = ans<<1;
		}
		ans = ans>>1;
		cout<<ans<<endl;
	}
	return 0;
}

