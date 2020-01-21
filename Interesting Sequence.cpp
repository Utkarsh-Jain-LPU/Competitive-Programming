#include<bits/stdc++.h>
using namespace std;

int check(int arr[],int n,int x,int k,int l) {
    
    int cost=INT_MAX,dec=0,inc=0;
    for(int i=0;i<n;i++) {
        if(arr[i] < x) {
            inc += x-arr[i];
        }
        if(arr[i] > x) {
            dec += arr[i]-x;
        }
    }
    if(dec <= inc) {
        cost = (dec*k)+((inc-dec)*l);
    }
    return cost;
}
int main() {

    int n,k,l;
    cin>>n>>k>>l;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int min=INT_MAX,max=0;
    for(int i=0;i<n;i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    int coins=INT_MAX;
    for(int i=min;i<=max;i++) {
        int res = check(arr,n,i,k,l);
        if(res < coins) {
            coins = res;
        }
    }
    cout<<coins;
    return 0;
}
