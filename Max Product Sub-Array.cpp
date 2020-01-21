#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	int max_prod=0,cur_max=1,cur_min=1;
	for(int i=0;i<n;i++) {
		if(arr[i] < 0) {
			int temp = cur_max;
			cur_max = max(1,arr[i]*cur_min);
			cur_min = arr[i]*temp;
		}
		else if(arr[i] > 0) {
			cur_max = arr[i]*cur_max;
			cur_min = min(1,arr[i]*cur_min);
		}
		else {
			cur_max = 1;
			cur_min = 1;
		}
		if(cur_max > max_prod) {
			max_prod = cur_max;
		}
	}
	cout<<max_prod;
	return 0;
}

