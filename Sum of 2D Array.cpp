#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int** arr = new int*[n];
    for(i=0;i<n;i++) {
        arr[i] = new int[n];
        for(j=0;j<n;j++) {
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(i=0;i<n;i++) {
    	for(j=0;j<n;j++) {
    		if(i==0 || j==0 || i==n-1 || j==n-1) {
    			sum += arr[i][j];
			}
		}
	}
	for(i=0;i<n;i++) {
		sum += arr[i][i];
	}
	for(i=0;i<n;i++) {
		sum += arr[i][n-i-1];
	}
	sum = sum-arr[0][0]-arr[n-1][n-1]-arr[0][n-1]-arr[n-1][0];
	if(n%2 != 0) {
		sum -= arr[n/2][n/2];
	}
	cout<<sum;
	return 0;
}

