#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    char arr[n][n] = {};
    int k=n/2;
    for(int i=0;i<=n/2;i++) {
    	for(int j=0;j<=k;j++) {
    		arr[i][j] = '*';
    		arr[n-i-1][j] = '*';
    		arr[i][n-j-1] = '*';
    		arr[n-i-1][n-j-1] = '*';
		}
		k--;
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
