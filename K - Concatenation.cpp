#include<bits/stdc++.h>
using namespace std;

int Kedane(int arr[],int n) {
	
	int max=0,cur_max=0;
	for(int i=0;i<n;i++) {
		cur_max += arr[i];
		if(cur_max > max) {
			max = cur_max;
		}
		if(cur_max < 0) {
			cur_max = 0;
		}
	}
	return max;
}

int main() {
	
	int n,k;
	cin>>n>>k;
	int arr[n],total_sum=0;
	for(int i=0;i<n;i++) {
		cin>>arr[i];
		total_sum += arr[i];
	}
	int Kedane_sum = Kedane(arr,n);
	int pref_sum,suff_sum,sum=0;
	for(int i=0;i<n;i++) {
		sum += arr[i];
		if(sum < 0) {
			break;
		}
		else {
			if(sum > pref_sum) {
				pref_sum = sum;
			}		
		}
	}
	sum = 0;
	for(int i=n-1;i>=0;i--) {
		sum += arr[i];
		if(sum < 0) {
			break;
		}
		else {
			if(sum > suff_sum) {
				suff_sum = sum;
			}		
		}
	}
	if(k == 1) {
		cout<<Kedane_sum;
	}
	else {
		if(total_sum <= 0) {
			cout<<max(Kedane_sum,pref_sum+suff_sum);
		}
		else {
			cout<<max(Kedane_sum,pref_sum+suff_sum+(total_sum*(k-2)));
		}
	}
	return 0;
}

