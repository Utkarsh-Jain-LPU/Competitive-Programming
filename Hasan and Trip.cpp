#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++) {
        int x,y,f;
        cin>>x>>y>>f;
        arr[i][0] = x;
        arr[i][1] = y;
        arr[i][2] = f;
    }
    double data[n];
    data[0] = arr[0][2];
    for(int i=1;i<n;i++) {
        double max = -DBL_MAX;
        for(int j=i-1;j>=0;j--) {
            long a = (arr[i][0]-arr[j][0]);
            long p = a*a;
            long b = (arr[i][1]-arr[j][1]);
            long q = b*b;
            long s = p+q;
            double dist = sqrt(s);
            if((data[j]+arr[i][2]-dist) > max) {
                max = (data[j]+arr[i][2]-dist);
            }
        }
        data[i] = max;
    }
    cout<<fixed<<setprecision(6)<<data[n-1];
    return 0;
}

