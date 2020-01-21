#include<bits/stdc++.h>
using namespace std;

int count = 0;
set<int> s;
set<string> st;
void Solve(char** arr,int n,int i,string* str) {
	
	if(i == n) {
		if(st.find(*str) == st.end()) {
			::count++;
			cout<<::count<<") "<<*str<<endl;
			st.insert(*str);
		}
		return;
	}
	for(int j=0;j<n;j++) {
		if(s.find(j) == s.end()) {
			*str += arr[i][j];
			s.insert(j);
			Solve(arr,n,i+1,str);
			int len = (*str).length();
			*str = (*str).substr(0,len-1);
			s.erase(j);
		}
	}
}
int main() {
	
	string str;
	cin>>str;
	int len = str.length();
	char arr[len];
	for(int i=0;i<len;i++) {
		arr[i] = str[i];
	}
	char** data = new char*[len];
	for(int i=0;i<len;i++) {
		data[i] = new char[len];
		for(int j=0;j<len;j++) {
			data[i][j] = arr[j];
		}
	}
	string* temp = new string;
	Solve(data,len,0,temp);
	return 0;
}
