#include<bits/stdc++.h>
using namespace std;

#define MAX 501

int solve(int arr[MAX][MAX],int m,int n,int data[MAX][MAX]) {
    
    data[m-1][n-1] = 1;
    for(int i=m-2;i>=0;i--) {
        if(data[i+1][n-1]-arr[i][n-1] <= 0) {
            data[i][n-1] = 1;
        }
        else {
            data[i][n-1] = data[i+1][n-1]-arr[i][n-1];
        }
    }
    for(int j=n-2;j>=0;j--) {
        if(data[m-1][j+1]-arr[m-1][j] <= 0) {
            data[m-1][j] = 1;
        }
        else {
            data[m-1][j] = data[m-1][j+1]-arr[m-1][j];
        }
    }
    for(int i=m-2;i>=0;i--) {
        for(int j=n-2;j>=0;j--) {
            int x = data[i][j+1];
            int y = data[i+1][j];
            int num = min(x,y);
            if(num-arr[i][j] <= 0) {
                data[i][j] = 1;
            }
            else {
                data[i][j] = num-arr[i][j];
            }
        }
    }
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
        int data[MAX][MAX];
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                data[i][j] = INT_MAX;
            }
        }
        solve(arr,m,n,data);
        cout<<data[0][0]<<endl;
    }
    return 0;
}

