#include<bits/stdc++.h>
using namespace std;

void check(long arr[],long left,long right,long money) {
    
    long index;
    while(left <= right) {
        long mid = (left+right)/2;
        if(arr[mid] == money) {
            index = mid;
            break;
        }
        else if(arr[mid] < money) {
            index = mid;
            left = mid+1; 
        }
        else {
            right = mid-1;
        }
    }
    cout<<(index+1)<<" "<<(money-arr[index])<<endl;
}
int main()
{
    long n,q;
    cin>>n;
    long arr[n];
    for(long i=0;i<n;i++) {
        cin>>arr[i];
    }
    cin>>q;
    long data[q];
    for(long i=0;i<q;i++) {
        cin>>data[i];
    }
    long shop[n],sum=arr[0];
    for(long i=1;i<n;i++) {
        shop[i-1] = sum;
        sum += arr[i];
    }
    shop[n-1] = sum;
    for(long i=0;i<q;i++) {
        if(data[i] < shop[0]) {
            cout<<"0 "<<data[i]<<endl;
        }
        else {
            check(shop,0,n-1,data[i]);
        }
    }
	return 0;
}

