#include<bits/stdc++.h>
using namespace std;

int m = pow(10,9)+7;
long data[40] = {0};
int balancedBTs(int h) {
    
    data[0] = 1;
    data[1] = 1;
    if(h==0 || h==1) {
        return 1;
    }
    int x = balancedBTs(h-1);
    data[h-1] = (long)x;
    int y = (int)(data[h-2]%m);
    long a1 = (long)x*x;
    long a2 = (long)x*y*2;
    int res1 = (int)(a1%m);
    int res2 = (int)(a2%m);
    int ans = (res1+res2)%m;
    return ans;
}
int main() {
	
	int n;
	cin>>n;
	int res = balancedBTs(n);
	cout<<res;
	return 0;
}
