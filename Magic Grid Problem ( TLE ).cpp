#include<bits/stdc++.h>
using namespace std;

#define MAX 501

int min;
int solve(int arr[MAX][MAX],int i,int j,int m,int n,int cur) {
    
    if(i==0 && j==0) {
        int temp = cur;
        cur -= arr[i][j];
        if(cur <= 0) {
            cur = 1;
        }
        if(cur < ::min) {
            ::min = cur;
        }
        return temp;
    }
    if(i<0 || j<0) {
        return cur;
    }
    int temp = cur;
    cur -= arr[i][j];
    if(cur <= 0) {
        cur = 1;
    }
    cur = solve(arr,i,j-1,m,n,cur);
    cur = solve(arr,i-1,j,m,n,cur);
    cur = temp;
    return cur;
}
int main() {
    
    int t;
    cin>>t;
    while(t--) {
        int m,n;
        cin>>m>>n;
        int arr[MAX][MAX];
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                cin>>arr[i][j];
            }
        }
        ::min = INT_MAX;
        solve(arr,m-1,n-1,m,n,1);
        cout<<::min<<endl;
    }
    return 0;
}

