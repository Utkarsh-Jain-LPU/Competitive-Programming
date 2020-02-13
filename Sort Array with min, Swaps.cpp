#include<bits/stdc++.h>
using namespace std;

int Solve(int arr[],int n) {
	
	int count=0;
	bool visited[n] = {false};
	for(int i=0;i<n;i++) {
		if(visited[i]) {
			continue;
		}
		int j=i;
		int cycle=0;
		while(!visited[j]) {
			cycle++;
			visited[j] = true;
			j = arr[j];
		}
		if(cycle > 0) {
			count += cycle-1;
		}
	}
	return count;
}
int main() {
	
	int n;
	cin>>n;
	int arr[n];
	int data[n];
	map<int,int> m;
	for(int i=0;i<n;i++) {
		cin>>arr[i];
		data[i] = arr[i];
	}
	sort(data,data+n);
	for(int i=0;i<n;i++) {
		m.insert(pair<int,int>(data[i],i));
	}
	for(int i=0;i<n;i++) {
		arr[i] = m[arr[i]];
	}
	int res = Solve(arr,n);
	cout<<res;
	return 0;
}
