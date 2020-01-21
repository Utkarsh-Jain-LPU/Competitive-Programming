#include<bits/stdc++.h>
using namespace std;

int getMaxMoney(int arr[],int n) {
    
    int data[n];
    data[0] = arr[0];
    data[1] = max(arr[0],arr[1]);
    for(int i=2;i<n;i++) {
        data[i] = max((arr[i]+data[i-2]),data[i-1]);
    }
    return data[n-1];
}
int main() {
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	int res = getMaxMoney(arr,n);
	cout<<res;
	return 0;
}
