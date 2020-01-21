#include<bits/stdc++.h>
using namespace std;

int main() {
	
	string str;
	cin>>str;
	int num=0;
	int len = str.length();
	int i = len-1;
	while(((int)str[i])>=48 && ((int)str[i])<=57) {
		num += pow(10,len-i-1)*(((int)str[i])-48);
		i--;
	}
	if(num == (i+1)) {
		cout<<"Yes";
	}
	else {
		cout<<"No";
	}
	return 0;
}

