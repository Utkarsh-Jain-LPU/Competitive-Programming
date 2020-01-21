#include<bits/stdc++.h>
using namespace std;

int swaps=0;
int doSwaps(int arr[],int n) {
    
    int count=0;
    for(int i=0;i<n;i++) {
        if(arr[i]<(i-1) || arr[i]>(i+3)) {
            return -1;
        }
    }
    for(int i=0;i<n-1;i++) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i],arr[i+1]);
            count++;
        }
    }
    swaps += count;
    if(count != 0) {
        return doSwaps(arr,n);
    }
    return swaps;
}
int check(int arr[],int n) {
    
    int c=0;
    int count = doSwaps(arr,n);
    if(count == -1) {
        return -1;
    }
    for(int i=0;i<n-1;i++) {
        if(arr[i] > arr[i+1]) {
            c++;
        }
    }
    if(c == 0) {
        return count;
    }
    return -1;
}
int main() {
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int res = check(arr,n);
    if(res == -1) {
        cout<<"NO";
    }
    else {
        cout<<"YES"<<endl;
        cout<<res;
    }
    return 0;
}
