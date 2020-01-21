#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int count = 0;
    for(int i=0;i<n;) {
        if(arr[i] == 1) {
            int c = 0;
            for(int j=(i+d-1);j>i;j--) {
                if(arr[j] == 1) {
                    c++;
                    i = j;
                    break;
                }
            }
            if(c == 0) {
                i = i+d;
            }
        }
        else {
            count++;
            int c = 0;
            for(int j=(i+d-1);j>i;j--) {
                if(arr[j] == 1) {
                    c++;
                    i = j;
                    break;
                }
            }
            if(c == 0) {
                i =i+d;
            }
        }
    }
    cout<<count;
    return 0;
}
