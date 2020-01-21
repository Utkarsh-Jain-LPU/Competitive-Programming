#include<bits/stdc++.h>
using namespace std;

void PairSum(int *input, int n) {
    
    map<int,int> m;
    for(int i=0;i<n;i++) {
        m[input[i]]++;
    }
    for(int i=0;i<n;i++) {
        int temp = (-1)*input[i];
        if(m.find(temp) != m.end()) {
            for(int j=0;j<(m[input[i]]*m[temp]);j++) {
                cout<<min(input[i],temp)<<" "<<max(input[i],temp)<<endl;
            }
            m[input[i]] = 0;
            m[temp] = 0;
        }
    }
}
int main() {
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	PairSum(arr,n);
	return 0;
}


