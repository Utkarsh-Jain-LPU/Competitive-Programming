#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int s_odd=0,s_even=0;
    for(int i=0;i<n;i++) {
        if((arr[i]%2 == 0) && (i%2 == 0)) {
            s_even += arr[i];
        }
        if((arr[i]%2 != 0) && (i%2 != 0)) {
            s_odd += arr[i];
        }
    }
    cout<<s_even<<" "<<s_odd;
	return 0;
}

