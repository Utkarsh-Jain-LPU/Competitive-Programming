#include<bits/stdc++.h>
using namespace std;

#define MAX 2400

int main() {

    int n,data[MAX];
    cin>>n;
    int st[n],et[n];
    for(int i=0;i<n;i++) {
        cin>>st[i];
    }
    for(int i=0;i<n;i++) {
        cin>>et[i];
    }
    int count;
    for(int i=0;i<MAX;i++) {
        count = 0;
        for(int j=0;j<n;j++) {
            if(i>=st[j] && i<=et[j]) {
                count++;
            }
        }
        data[i] = count;
    }
    int max=0;
    for(int i=0;i<MAX;i++) {
        if(data[i] > max) {
            max = data[i];
        }
    }
    cout<<max;
    return 0;
}
