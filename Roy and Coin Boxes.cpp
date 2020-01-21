#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n,m;
    cin>>n>>m;
    int st[n+1] = {0};
    int en[n+1] = {0};
    for(int i=0;i<m;i++) {
        int l,r;
        cin>>l>>r;
        st[l]++;
        en[r]++;
    }
    int q;
    cin>>q;
    int temp[q];
    for(int i=0;i<q;i++) {
        int x;
        cin>>x;
        temp[i] = x;
    }
    int data[n+1] = {0};
    data[0] = 0;
    data[1] = st[1];
    for(int i=2;i<=n;i++) {
        data[i] = data[i-1]+st[i]-en[i-1];
    }
    int A[m+1] = {0};
    for(int i=0;i<=n;i++) {
        A[data[i]]++;
    }
    int B[m+1] = {0};
    int sum = 0;
    for(int i=m;i>=0;i--) {
        sum += A[i];
        B[i] = sum;
    }
    for(int i=0;i<q;i++) {
        if(temp[i] > m) {
            cout<<'0'<<endl;
        }
        else {
            cout<<B[temp[i]]<<endl;
        }
    }
    return 0;
}

