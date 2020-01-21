#include<bits/stdc++.h>
using namespace std;

#define MAX 100

int kedane(int arr[],int n) {
    
    int max = arr[0];
    int cur = 0;
    for(int i=0;i<n;i++) {
        cur += arr[i];
        if(cur > max) {
            max = cur;
        }
        if(cur < 0) {
            cur = 0;
        }
    }
    return max;
}
int solve(int arr[MAX][MAX],int m,int n) {
    
    int max_sum = arr[0][0];
    for(int i=0;i<m;i++) {
        int data[MAX] = {0};
        for(int j=i;j<m;j++) {
            for(int k=0;k<n;k++) {
                data[k] += arr[j][k];
            }
            int cur_sum = kedane(data,n);
            if(cur_sum > max_sum) {
                max_sum = cur_sum;
            }
        }
        data[MAX] = {0};
    }
    return max_sum;
}
int main()
{
    int m,n;
    cin>>m>>n;
    int arr[MAX][MAX];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>arr[i][j];
        }
    }
    int res = solve(arr,m,n);
    cout<<res;
    return 0;
}

