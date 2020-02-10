#include<bits/stdc++.h>
using namespace std;

pair<int,string> res;
void Solve(char* arr,int n) {
	
	int max=0;
	for(int i=0;i<n;i++) {
		string str="";
		for(int j=i;j<n;j++) {
			str += arr[j];
			string rev = str;
			reverse(rev.begin(),rev.end());
			if(str == rev) {
				if(str.length() > max) {
					max = str.length();
					res = pair<int,string>(max,str);
				}
			}
		}
	}
}
int main() {
	
	int n;
	cin>>n;
	string str;
	cin>>str;
	char* arr = new char[n];
	for(int i=0;i<n;i++) {
		arr[i] = str[i];
	}
	Solve(arr,n);
	cout<<res.first<<endl;
	cout<<res.second;
	return 0;
}
