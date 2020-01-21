#include<bits/stdc++.h>
using namespace std;

int Subsequences(string str,string output[]) {
	
	if(str.empty()) {
		output[0] = "";
		return 1;
	}
	int count = Subsequences(str.substr(1),output);
	for(int i=0;i<count;i++) {
		output[i+count] = str[0]+output[i];
	}
	return 2*count;
}
int main() {
	
	string str;
	cin>>str;
	int len = str.size();
	int size = pow(2,len);
	string *output = new string[size];
	int count = Subsequences(str,output);
	for(int i=0;i<count;i++) {
		cout<<output[i]<<endl;
	}
    return 0;
}


