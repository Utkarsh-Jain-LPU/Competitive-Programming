#include<bits/stdc++.h>
using namespace std;

#define MAX 10001
#define m 1000000007

int main() {
    
    int n,k,x;
    cin>>n>>k>>x;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int data[MAX] = {0};
    for(int i=0;i<n;i++) {
        data[arr[i]]++;
    }
    while(k--) {
        int odd = 0;
        int temp[MAX] = {0};
        for(int i=0;i<MAX;i++) {
            if(data[i] != 0) {
                int count = 0;
                if(data[i]%2 == 0) {
                    count = (count+(data[i]/2))%m;
                }
                else {
                    if(odd%2 == 0) {
                        count = (count+((data[i]+1)/2))%m;
                    }
                    else {
                        count = (count+(data[i]/2))%m;
                    }
                    odd++;
                }
                temp[i^x] = (temp[i^x]+count)%m;
                temp[i] = (temp[i]+(data[i]-count))%m;
            }
        }
        for(int i=0;i<MAX;i++) {
            data[i] = temp[i];
        }
    }
    int max;
    for(int i=MAX-1;i>=0;i--) {
        if(data[i] != 0) {
            max = i;
            break;
        }
    }
    int min;
    for(int i=0;i<MAX;i++) {
        if(data[i] != 0) {
            min = i;
            break;
        }
    }
    cout<<max<<" "<<min;
    return 0;
}

