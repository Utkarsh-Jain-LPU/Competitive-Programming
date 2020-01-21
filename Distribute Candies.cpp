#include<bits/stdc++.h>
using namespace std;

#define SIZE 1000000000

long long candies(long long arr[],long long n,long long k) {
    
    long long count,left=1,right=SIZE;
    while(left <= right) {
        
        long long mid = (left+right)/2;
        long long sum=0;
        for(long long i=0;i<n;i++) {
            sum += (arr[i]/mid);
        }
        if(sum < k) {
            right = mid-1;
        }
        else {
            count = mid;
            left = mid+1;
        }
    }
    return count;
}
int main() {

    long long t;
    cin>>t;
    while(t--) {
        long long n,k;
        cin>>n>>k;
        long long arr[n];
        for(long long i=0;i<n;i++) {
            cin>>arr[i];
        }
        long long res = candies(arr,n,k);
        cout<<res<<endl;
    }
    return 0;
}
