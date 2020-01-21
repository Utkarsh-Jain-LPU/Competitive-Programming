#include<bits/stdc++.h>
using namespace std;

int firstIndex(int input[], int size, int x) {
    
    if(size == 0) {
        return -1;
    }
    if(input[0] == x) {
        return 0;
    }
    int index = firstIndex(input+1,size-1,x);
    if(index == -1) {
        return -1;
    }
    else {
        return index+1;
    }
}
int main() {
	
	int n,x;
	cin>>n>>x;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	firstIndex(arr,n,x);
	return 0;
}

