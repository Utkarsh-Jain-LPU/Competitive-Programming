#include<bits/stdc++.h>
using namespace std;

int getMin(int* arr,int n) {
    
    int data[n];
    data[0] = 1;
    for(int i=1;i<n;i++) {
        if(arr[i] > arr[i-1]) {
            data[i] = data[i-1]+1;
        }
        else {
            data[i] = 1;
        }
    }
    for(int i=n-2;i>=0;i--) {
        if(arr[i]>arr[i+1] && data[i]<=data[i+1]) {
            data[i] = data[i+1]+1;
        }
    }
    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += data[i];
    }
    return sum;
}
int main() {
	
	int n;
	cin>>n;
	int* arr = new int[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	int res = getMin(arr,n);
	cout<<res;
	return 0;
}
