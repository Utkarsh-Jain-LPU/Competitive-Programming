#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,i;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++) {
			cin>>arr[i];
		}
		int temp=1,cur_prod=1,max_prod=1;
		for(i=0;i<n;i++) {
			if(arr[i] == 0) {
				temp = 1;
				cur_prod = 1;
			}
			else {
			    cur_prod *= arr[i];
			    if(temp != 1) {
				    temp *= cur_prod;
			    }
			    if(max(cur_prod,temp) > max_prod) {
				    max_prod = max(cur_prod,temp);
			    }
		    	if(cur_prod<0 && temp==1) {
		    		temp = cur_prod;
			    }    
				if(temp != 1) {
					cur_prod = 1;
				}	
			}
		}
		cout<<max_prod<<endl;
	}
	return 0;
}
