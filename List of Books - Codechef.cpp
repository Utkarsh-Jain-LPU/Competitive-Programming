#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++) {
		int x;
		cin>>x;
		v.push_back(x);
	}
	int k;
	cin>>k;
	for(int i=0;i<k;i++) {
		int x;
		cin>>x;
		vector<int> :: iterator p;
		p = v.begin();
		p = p+x-1;
		cout<<*p<<endl;
		v.erase(p);
	}
	return 0;
}
