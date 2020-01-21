#include<bits/stdc++.h>
using namespace std;

bool isprime(int n) {
	if(n<=1) {
		return false;
	}
	if(n<=3) {
		return true;
	}
	if(n%2==0 || n%3==0) {
		return false;
	}
	for(int i=5;i*i<=n;i=i+6) {
		if(n%i==0 || n%(i+2)==0) {
			return false;
		}
		else {
			return true;
		}
	}
}

void check(int l,int r) {
	int i;
	for(i=l;i<=r;i++) {
		isprime(i) ? cout<<i<<" " : cout<<"";
	}
}

int main() {
	int i,l,r;
	cin>>l>>r;
	check(l,r);
	return 0;
}
