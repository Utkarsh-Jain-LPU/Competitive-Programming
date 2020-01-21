#include<bits/stdc++.h>
using namespace std;

int longestBitonicSubarray(int* arr,int n) {	
    
    int Front[n] = {0};
    Front[0] = 1;
    for(int i=1;i<n;i++) {
		int num = 0;
		for(int j=i-1;j>=0;j--) {
			if(arr[j] < arr[i]) {
				if(Front[j] > num) {
					num = Front[j];
				}
			}
		}
		Front[i] = num+1;
	}
	int Second[n] = {0};
    Second[n-1] = 1;
    for(int i=n-2;i>=0;i--) {
		int num = 0;
		for(int j=i+1;j<n;j++) {
			if(arr[j] < arr[i]) {
				if(Second[j] > num) {
					num = Second[j];
				}
			}
		}
		Second[i] = num+1;
	}
    int data[n];
    for(int i=0;i<n;i++) {
        data[i] = Front[i]+Second[i];
    }
    int max = 0;
    for(int i=0;i<n;i++) {
        if(data[i] > max) {
            max = data[i];
        }
    }
    return max-1;
}
int main() {
	
	int n;
	cin>>n;
	int* arr = new int[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	int res = longestBitonicSubarray(arr,n);
	cout<<res;
	return 0;
}

