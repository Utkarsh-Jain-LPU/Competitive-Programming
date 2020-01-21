#include<bits/stdc++.h>
using namespace std;

int main() {
	int i,j,n;
	cin>>n;
	int arr[n+1];
	for(i=0;i<=n;i++) {
		arr[i] = -1;
	}
	arr[0] = arr[1] = 0;
	for(i=2;i<=n;i++) {
		if(arr[i] == -1) {
			arr[i] = 1;
			for(j=2*i;j<=n;j=j+i) {
				arr[j] = 0;
			}
		}
	}
	for(i=0;i<=n;i++) {
		if(arr[i] == 1) {
			cout<<i<<" ";
		}
	}
	return 0;
}

