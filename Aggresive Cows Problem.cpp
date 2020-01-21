#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--) {
        int n,c;
        cin>>n>>c;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int start,end,mid,res=0; 
        start = 0;
        end = arr[n-1]-arr[0];
        mid = (start+end)/2;
        while(start <= end) {
            int cow = c-1;
            int loc = 0;
            for(int i=1;i<n;i++) {
                if(arr[i]-arr[loc] >= mid) {
                    cow--;
                    loc = i;
                }
                if(cow == 0) {
                    break;
                }
            }
            if(cow <= 0) {
                res = mid;
                start = mid+1;
            }
            else {
                end = mid-1;
            }
            mid = (start+end)/2;
        }
        cout<<res<<endl;
    }
    return 0;
}
