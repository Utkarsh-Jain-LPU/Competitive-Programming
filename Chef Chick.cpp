#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--) {
		int num;
		cin>>num;
		int min = INT_MAX;
		int data[num];
		for(int i=0;i<num;i++) {
			cin>>data[i];
			if(data[i] < min) {
				min = data[i];
			}
		}
		cout<<min<<endl;
	}
	return 0;
}
