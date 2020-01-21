#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int a,b;
    a = n+1;
    b = (2*n)+1;
    int arr[a][b];
    for(int i=0;i<a;i++) {
        for(int j=0;j<b;j++) {
            arr[i][j] = -1;
        }
    }
    int c = n;
    for(int i=0;i<a;i++) {
        for(int j=(c-i);j<=(c+i);j++) {
            arr[i][j] = abs(n-j);
        }
    }
    for(int i=0;i<a;i++) {
        for(int j=0;j<(b-(n-i));j++) {
            if(arr[i][j] != -1) {
                cout<<arr[i][j];
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

