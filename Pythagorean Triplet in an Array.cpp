#include<cmath>
#include<bits/stdc++.h>
using namespace std;

void pthgrm(int arr[],int n) {
	int i,j,c=0;
	for(i=0;i<n;i++) {
		arr[i] = arr[i]*arr[i];
	}
	sort(arr,arr+n);
	for(i=(n-1);i>=2;i--) {
		int a = arr[i];
		int l = 0;
		int r = i-1;
		while(l<r) {
			if(arr[l]+arr[r] == a) {
				cout<<sqrt(arr[l])<<","<<sqrt(arr[r])<<","<<sqrt(a)<<endl;
				c++;
				l++,r--;
			}
			else {
				(arr[l]+arr[r] < a) ? l++ : r--;
			}
		}
	}
	if(c == 0) {
		cout<<"None"<<endl;
	}
}

int main() {
	int i,n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	pthgrm(arr,n);
	return 0;
}
