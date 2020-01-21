#include<bits/stdc++.h>
using namespace std;

long long merge(int A[],int left,int mid,int right) {
    
    int i=left,j=mid,k=0;
    long long count = 0;
    
    int arr[right-left+1];
    
    while(i<mid && j<=right) {
        if(A[i] <= A[j]) {
            arr[k++] = A[i++];
        }
        else {
            arr[k++] = A[j++];
            count += mid-i;
        }
    }
    while(i < mid) {
        arr[k++] = A[i++];
    }
    while(j <= right) {
        arr[k++] = A[j++];
    }
    for(int i=left,k=0;i<=right;i++,k++) {
        A[i] = arr[k];
    }
    return count;
}
long long mergeSort(int A[],int left,int right) {
    
    long long count = 0;
    
    if(right > left) {
        
        int mid = (left+right)/2;
        
        long long leftSum = mergeSort(A,left,mid);
        long long rightSum = mergeSort(A,mid+1,right);
        long long curSum = merge(A,left,mid+1,right);
        
        return leftSum+rightSum+curSum;
    }
    return count;
}
long long solve(int A[], int n)
{
    long long ans = mergeSort(A,0,n-1);
    return ans;
}
int main() {
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	long long res = solve(arr,n);
	cout<<res;
	return 0;
}

