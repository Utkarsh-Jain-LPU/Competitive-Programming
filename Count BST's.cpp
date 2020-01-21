#include<bits/stdc++.h>
using namespace std;

#define m 1000000007

int data[1001] = {0};
int countBST(int n) {
    
    if(n == 0) {
        return 1;
    }
    if(n == 1) {
        return 1;
    }
    if(data[n] != 0) {
        return data[n];
    }
    int res = 0;
    for(int k=1;k<=n;k++) {
        long a = countBST(k-1);
        long b = countBST(n-k);
        res = ((res%m)+((a%m)*(b%m))%m)%m; 
    }
    data[n] = res;
    return res;
}
int main() {
	
	int n;
	cin>>n;
	int res = countBST(n);
	cout<<res;
	return 0;
}
