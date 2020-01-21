#include<bits/stdc++.h>
using namespace std;

int main() {
    
    long long n,x,y;
    cin>>n>>x>>y;
    string str;
    cin>>str;
    long long pos=0,grp=0;
    if(str[pos] == '1') {
        while(pos<n && str[pos]=='1') {
            pos++;
        }
    }
    if(pos != n)  {
        for(long long i=pos;i<n;i++) {
            if(str[i]=='1' && str[i-1]=='0') {
                grp++;
            }
        }
        if(str[n-1] == '0') {
            grp++;
        }
    }
    long long cost=0;
    if(grp > 0) {
        cost = ((grp-1)*min(x,y))+y;
    }
    cout<<cost;
    return 0;
}

