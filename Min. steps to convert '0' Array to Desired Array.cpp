#include<bits/stdc++.h>
using namespace std;

int convert(int arr[],int n) {
	int i,result=0;
	while(true) {
		int odd=0,zero=0;
		for(i=0;i<n;i++) {
			if(arr[i] == 0) {
				zero++;
			}
			else if(arr[i]%2 !=0 ) {
				odd++;
			}
		}
		if(zero == n) {
			return result;
		}
		if(odd == 0) {
			for(i=0;i<n;i++) {
				arr[i] = arr[i]/2;
			}
			result++;
		}
		else {
			for(i=0;i<n;i++) {
				if(arr[i]%2 != 0) {
					arr[i] = arr[i]-1;
					result++;
				}
			}
		}
	}
}

int main() {
	int i,n,res;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	res = convert(arr,n);
	cout<<res;
	return 0;
}
