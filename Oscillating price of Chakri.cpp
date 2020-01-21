#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++) {
        cin>>arr[i];
    }
    int min=INT_MAX,max_prof=0;
    for(i=0;i<n;i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        else {
            int prof = arr[i]-min;
            if(prof > max_prof) {
                max_prof = prof;
            }
        }
    }
    cout<<max_prof;
    return 0;
}

