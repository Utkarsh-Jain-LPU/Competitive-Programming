#include<bits/stdc++.h>
using namespace std;

int main() {

    int n,i,target;
    cin>>n>>target;
    int arr[n];
    for(i=0;i<n;i++) {
        cin>>arr[i];
    }
    int sl,el,c=0;
    for(i=0;i<n;i++) {
        int sum=arr[i],t=i+1;
        while(sum < target) {
            sum += arr[t];
            t++;
        }
        if(sum == target) {
            sl = i;
            el = t;
            c++;
            break;
        }
    }
    if(c == 0) {
        cout<<"false";
    }
    else {
        cout<<"true"<<endl;
        for(i=sl;i<el;i++) {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
