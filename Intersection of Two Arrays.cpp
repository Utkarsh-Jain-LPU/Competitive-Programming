#include<bits/stdc++.h>
using namespace std;

void Intersection(set<int> s1,set<int> s2,int m,int n) {
	set<int> :: iterator i,j;
	i = s1.begin();
	j = s2.begin();
	while(i!=s1.end() && j!=s2.end()) {
		if(*i > *j) {
			j++;
		}
		else if(*i < *j) {
			i++;
		}
		else {
			cout<<*i<<" ";
			i++,j++;
		}
	}
}

int main() {
	int i,m,n;
	cin>>m>>n;
	int a1[m],a2[n];
	set<int> s1,s2;
	for(i=0;i<m;i++) {
		cin>>a1[i];
		s1.insert(a1[i]);
	}
	for(i=0;i<n;i++) {
		cin>>a2[i];
		s2.insert(a2[i]);
	}
	Intersection(s1,s2,m,n);
	return 0;
}
