#include<bits/stdc++.h>
using namespace std;

int Solve(int n,int Den[],int nDen,int** arr) {
    
    if(n == 0) {
        return 1;
    }
    if(n < 0) {
        return 0;
    }
    if(nDen == 0) {
        return 0;
    }
    if(arr[n-1][nDen-1] > -1) {
        return arr[n-1][nDen-1];
    }
    int include = Solve(n-Den[0],Den,nDen,arr);
    int exclude = Solve(n,Den+1,nDen-1,arr);
    int res = include + exclude;
    arr[n-1][nDen-1] = res;
    return res;
}
int countWaysToMakeChange(int Den[],int nDen,int n) {

    int** arr = new int*[n];
    for(int i=0;i<n;i++) {
        arr[i] = new int[nDen];
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<nDen;j++) {
            arr[i][j] = -1;
        }
    }
    int res = Solve(n,Den,nDen,arr);
    return res;
}
int main() {
	
	int n,nDen;
	cin>>n>>nDen;
	int arr[nDen];
	for(int i=0;i<nDen;i++) {
		cin>>arr[i];
	}
	int res = countWaysToMakeChange(arr,nDen,n);
	cout<<res;
	return 0;
}
