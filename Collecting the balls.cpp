#include<bits/stdc++.h>
using namespace std;

long long check(long long n,long long value) {
    
    long long srma=0;
    while(n > value) {
        srma += value;
        n -= value;
        long long x = n/10;
        n -= x;
    }
    srma += n;
    return srma;
}
long long collect(long long n,long long left,long long right) {
    
    long long final_res,half;
    while(right >= left) {
        long long mid = (left+right)/2;
        long long res = check(n,mid);
        if(n%2 == 0) {
            half = n/2;
        }
        else {
            half = (n+1)/2;
        }
        if(res >= half) {
            final_res = mid;
            right = mid-1;
        }
        else {
            left = mid+1;
        }
    }
    return final_res;
}
int main()
{
    long long n,res;
    cin>>n;
    res = collect(n,1,n);
    cout<<res;
	return 0;
}

