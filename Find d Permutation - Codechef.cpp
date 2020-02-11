#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int val=1;
	vector<int> v;
	vector<int> :: iterator k;
	for(int i=0;i<n;i++) {
		int x;
		cin>>x;
		k = v.end()-x;
		v.insert(k,val);
		val++;
	}
	for(k=v.begin();k!=v.end();k++) {
		cout<<*k<<" ";
	}
	return 0;
}
