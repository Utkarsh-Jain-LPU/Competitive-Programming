#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n1,n2,n3,x;
	cin>>n1>>n2>>n3;
	set<int> l1,l2,l3;
	map<int,int> m;
	for(int i=0;i<n1;i++) {
		cin>>x;
		l1.insert(x);
	}
	for(int i=0;i<n2;i++) {
		cin>>x;
		l2.insert(x);
	}
	for(int i=0;i<n3;i++) {
		cin>>x;
		l3.insert(x);
	}
	set<int> :: iterator it;
	map<int,int> :: iterator k;
	for(it=l1.begin();it!=l1.end();it++) {
		m[*it]++;
	}
	for(it=l2.begin();it!=l2.end();it++) {
		m[*it]++;
	}
	for(it=l3.begin();it!=l3.end();it++) {
		m[*it]++;
	}
	for(k=m.begin();k!=m.end();k++) {
		if(k->second > 1) {
			cout<<k->first<<endl;
		}
	}
	return 0;
}


