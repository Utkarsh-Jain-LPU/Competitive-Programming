#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int temp = n;
        int x=0;
        int k=0;
        while(temp > 0) {
            int a = temp%10;
            if(a == 6) {
                x = (9*pow(10,k++))+x;
            }
            else {
                x = (a*pow(10,k++))+x;
            }
            temp /= 10;
        }
        cout<<(x-n)<<endl;
    }
	return 0;
}

