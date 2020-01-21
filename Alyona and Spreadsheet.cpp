#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>arr[i][j];
        }
    }
    int data[m][n];
    for(int i=0;i<n;i++) {
        data[m-1][i] = 1;
    }
    for(int i=m-2;i>=0;i--) {
        for(int j=0;j<n;j++) {
            if(arr[i][j] <= arr[i+1][j]) {
                data[i][j] = data[i+1][j]+1;
            }
            else {
                data[i][j] = 1;
            }
        }
    }
    int t;
    cin>>t;
    while(t--) {
        int a,b;
        cin>>a>>b;
        int c = 0;
        for(int i=0;i<n;i++) {
            if(data[a-1][i] >= (b-a+1)) {
                cout<<"Yes"<<endl;
                c++;
                break;
            }
        }
        if(c == 0) {
            cout<<"No"<<endl;
        }
    }
    return 0;
}

