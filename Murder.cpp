#include<bits/stdc++.h>
using namespace std;

long long merge(int A[],int left,int mid,int right) {
    
    int i=left,j=mid,k=0;
    long long count=0;
    int arr[right-left+1];
    
    while(i<mid && j<=right) {
        if(A[i] < A[j]) {
            count += A[i]*(right-j+1);
            arr[k++] = A[i++];
        }
        else {
            arr[k++] = A[j++];
        }
    }
    while(i<mid) {
        arr[k++] = A[i++];
    }
    while(j<=right) {
        arr[k++] = A[j++];
    }
    for(int x=left,y=0;x<=right;x++,y++) {
        A[x] = arr[y];
    }
    return count;
}
long long mergeSort(int A[],int left,int right) {
    
    long long count = 0;
    while(right > left) {
        int mid = (left+right)/2;
        
        long long leftSum = mergeSort(A,left,mid);
        long long rightSum = mergeSort(A,mid+1,right);
        long long curSum = merge(A,left,mid+1,right);
        
        return leftSum+rightSum+curSum;
    }
    return count;
}
int main() {
    
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++) {
            cin>>A[i];
        }
        long long res = mergeSort(A,0,n-1);
        cout<<res<<endl;
    }
    return 0;
}
