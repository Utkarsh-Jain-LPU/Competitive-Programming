#include<bits/stdc++.h>
using namespace std;

int res;
set<int> s;
int st[4];
void Solve(int** arr,int i) {
	
	if(i == 4) {
		int data[4];
		for(int i=0;i<4;i++) {
			data[i] = st[i];
		}
		sort(data,data+4);
		int sum=0;
		if(data[0] == 0) {
			sum -= 100;
		}
		else {
			sum += data[0]*25;
		}
		if(data[1] == 0) {
			sum -= 100;
		}
		else {
			sum += data[1]*50;
		}
		if(data[2] == 0) {
			sum -= 100;
		}
		else {
			sum += data[2]*75;
		}
		if(data[3] == 0) {
			sum -= 100;
		}
		else {
			sum += data[3]*100;
		}
		if(sum > ::res) {
			::res = sum;
		}
		return;
	}
	for(int j=0;j<4;j++) {
		if(s.find(j) == s.end()) {
			s.insert(j);
			st[i] = arr[i][j];
			Solve(arr,i+1);
			st[i] = -1;
			s.erase(j);
		}
	}
	return;
}
int main() {
	
	int t;
	cin>>t;
	long total = 0;
	while(t--) {
		int n;
		cin>>n;
		::res = INT_MIN;
		int** arr = new int*[4];
		for(int i=0;i<4;i++) {
			arr[i] = new int[4];
			for(int j=0;j<4;j++) {
				arr[i][j] = 0;
			}
		}
		while(n--) {
			int x;
			char ch;
			cin>>ch>>x;
			if(ch == 'A') {
				arr[0][(x/3)%4]++;
			}
			else if(ch == 'B') {
				arr[1][(x/3)%4]++;
			}
			else if(ch == 'C') {
				arr[2][(x/3)%4]++;
			}
			else {
				arr[3][(x/3)%4]++;
			}
		}
		Solve(arr,0);
		total += ::res;
		cout<<::res<<endl;
	}
	cout<<total;
	return 0;
}

