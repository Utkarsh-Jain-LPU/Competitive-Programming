#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        if(n == 0) {
            cout<<"NO"<<endl;
            continue;
        }
        if(n == 1) {
            cout<<"YES"<<endl;
            continue;
        }
        int x=1;
        while(x <= n) {
            x = x<<1;
        }
        if(n == x-1) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
	return 0;
}

