#include<bits/stdc++.h>
using namespace std;

void doSwaps(int arr[],int n,int count) {
    
    if(count == 0) {
        return;
    }
    int x=0;
    for(int i=0;i<n-1;i++) {
        if(arr[i+1] == arr[i]-1) {
            swap(arr[i],arr[i+1]);
            x++;
        }
    }
    doSwaps(arr,n,x);
}
bool check(int arr[],int n) {
    
    doSwaps(arr,n,1);
    int x=0;
    for(int i=0;i<n-1;i++) {
        if(arr[i]+1 != arr[i+1]) {
            x++;
        }
    }
    if(x == 0) {
        return true;
    }
    else {
        return false;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        bool res = check(arr,n);
        if(res) {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
	return 0;
}

