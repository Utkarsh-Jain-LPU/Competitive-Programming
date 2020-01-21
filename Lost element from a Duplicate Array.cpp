#include<bits/stdc++.h>
using namespace std;

int lost(int a1[],int a2[],int m,int n) {
	int i,s1=0,s2=0;
	if(m!=n+1 && n!=m+1) {
		return -1;
	}
	for(i=0;i<m;i++) {
		s1 += a1[i];
	}
	for(i=0;i<n;i++) {
		s2 += a2[i];
	}
	return (s1>s2) ? (s1-s2) : (s2-s1);
}

int main() {
	int i,n,m,res;
	cin>>m>>n;
	int arr1[m],arr2[n];
	for(i=0;i<m;i++) {
		cin>>arr1[i];
	}
	for(i=0;i<n;i++) {
		cin>>arr2[i];
	}
	res = lost(arr1,arr2,m,n);
	if(res == -1) {
		cout<<"Invalid Input...";
	}
	else {
		cout<<res;
	}
	return 0;
}
