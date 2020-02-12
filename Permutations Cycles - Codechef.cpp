#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int arr[n+1];
	arr[0] = -1;
	for(int i=1;i<=n;i++) {
		cin>>arr[i];
	}
	int count=0;
	bool visited[n+1] = {false};
	visited[0] = true;
	vector<vector<int> > vec;
	vector<int> data;
	for(int i=0;i<=n;i++) {
		if(visited[i]) {
			continue;
		}
		int j=i;
		data.clear();
		while(!visited[j]) {
			data.push_back(j);
			visited[j] = true;
			j = arr[j];
		}
		data.push_back(j);
		vec.push_back(data);
		count++;
	}
	cout<<count<<endl;
	vector<int> :: iterator p;
	vector<vector<int> > :: iterator k;
	for(k=vec.begin();k!=vec.end();k++) {
		vector<int> temp = *k;
		for(p=temp.begin();p!=temp.end();p++) {
			cout<<*p<<" ";
		}
		cout<<endl;
	}
	return 0;
}
