#include<bits/stdc++.h>
using namespace std;

long check(long arr[],long n) {
    
    while(true) {
        for(long i=0;i<n;i++) {
            if(arr[i]-i <= 0) {
                return i+1;
            }
        }
        for(long i=0;i<n;i++) {
            arr[i] = arr[i]-n;
        }
    }
}
int main()
{
    long n;
    cin>>n;
    long arr[n];
    for(long i=0;i<n;i++) {
        cin>>arr[i];
    }
    long res = check(arr,n);
    cout<<res;
	return 0;
}

