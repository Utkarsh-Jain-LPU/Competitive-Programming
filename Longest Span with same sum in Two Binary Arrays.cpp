#include<bits/stdc++.h>
using namespace std;

int Lngst_span(int n,int a1[],int a2[]) {
	int i;
	int data[(2*n)+1];
	for(i=0;i<((2*n)+1);i++) {
		data[i] = -1;
	}
	int maxlen=0;
	int pa1=0,pa2=0;
	for(i=0;i<n;i++) {
		pa1 += a1[i];
		pa2 += a2[i];
		int cdiff = pa1-pa2;
		int diffindex = n + cdiff;
		if(cdiff == 0) {
			maxlen = i+1;
		}
		else if(data[diffindex] == -1) {
			data[diffindex] = i;
		}
		else {
			int len = i-data[diffindex];
			if(len > maxlen) {
				maxlen = len;
			}
		}
	}
	return maxlen;
}

int main() {
	int i,n,res;
	cin>>n;
	int a1[n],a2[n];
	for(i=0;i<n;i++) {
		cin>>a1[i];
	}
	for(i=0;i<n;i++) {
		cin>>a2[i];
	}
	res = Lngst_span(n,a1,a2);
	cout<<res;
	return 0;
}

