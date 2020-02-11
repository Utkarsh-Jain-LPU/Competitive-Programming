#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int t = 0;
	int arr[n];
	for(int i=0;i<n;i++) {
		int x;
		cin>>x;
		arr[t++] = x;
		int count = 0;
		for(int j=0;j<t;j++) {
			if(arr[j] > x) {
				count++;
			}
		}
		cout<<count+1<<endl;
	}
	return 0;
}

