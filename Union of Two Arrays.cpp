#include<bits/stdc++.h>
using namespace std;

void Union(set<int> s1,set<int> s2,int m,int n) {
	set<int> :: iterator i,j;
	i=s1.begin();
	j=s2.begin();
	while(i!=s1.end() && j!=s2.end()){
		if(*i < *j) {
			cout<<*i<<" ";
			i++;
		}
		else if(*i > *j) {
			cout<<*j<<" ";
			j++;
		}
		else {
			cout<<*i<<" ";
			i++,j++;
		}
	}
	while(i!=s1.end()) {
		cout<<*i<<" ";
		i++;
	}
	while(j!=s2.end()) {
		cout<<*j<<" ";
		j++;
	}
}

int main() {
	int i,m,n;
	cin>>m>>n;
	int arr1[m],arr2[n];
	set<int> s1,s2;
	for(i=0;i<m;i++) {
		cin>>arr1[i];
		s1.insert(arr1[i]);
	}
	for(i=0;i<n;i++) {
		cin>>arr2[i];
		s2.insert(arr2[i]);
	}
	Union(s1,s2,m,n);
	return 0;
}


