#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int m,n;
	cin>>m>>n;
	set<int> s; 
	for(int i=0;i<(m+n);i++) {
		int x;
		cin>>x;
		if(x != -1) {
			s.insert(x);
		}
		else {
			set<int> :: iterator k;
			k = s.end();
			k--;
			cout<<*k<<endl;
			s.erase(k);
		}
	}
	return 0;
}
