#include<bits/stdc++.h>
using namespace std;

int main() {
	string s,data;
	cin>>s;
	data = s;
	reverse(s.begin(),s.end());
	if(data == s) {
		cout<<"Yes";
	}
	else {
		cout<<"No";
	}
	return 0;
}

