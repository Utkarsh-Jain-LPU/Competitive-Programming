#include<bits/stdc++.h>
using namespace std;

int minCount(int n) {
    
    if(n <= 3) {
        return n;
    }
    int int_sq = sqrt(n);
    float f_sq = sqrt(n);
    if(int_sq == f_sq) {
        return 1;
    }
    int arr[n+1];
    for(int i=0;i<=3;i++) {
        arr[i] = i;
    }
    arr[4] = 1;
    for(int i=5;i<=n;i++) {
        int num = INT_MAX;
        int x = sqrt(i);
        for(int j=x;j>0;j--) {
            if(arr[(i-(j*j))] < num) {
                num = arr[(i-(j*j))];
            }
        }
        arr[i] = num+1;
    }
    return arr[n];
}
int main() {
	
	int n;
	cin>>n;
	int res = minCount(n);
	cout<<res;
	return 0;
}
