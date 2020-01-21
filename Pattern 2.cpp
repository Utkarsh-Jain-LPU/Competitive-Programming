#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int t = n;
	int k=0;
	int b = (2*n)-1;
	int arr[n][b];
	for(int i=0;i<n;i++) {
		for(int j=0;j<b;j++) {
			arr[i][j] = -1;
		}
	}
	for(int i=(n-1);i>=0;i--) {
		int x = k;
		for(int j=t;j<(2*t);j++) {
			arr[i][x] = j;
			arr[i][b-x-1] = j;
			x++;
		}
		k++;
		t--;
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<b;j++) {
			if(arr[i][j] != -1) {
				cout<<arr[i][j];
			}
			else {
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}

