#include<bits/stdc++.h>
using namespace std;

int main() {
	int k,t,i,j,c=0;
	string str1,str2;
	cin>>t;
	for(k=0;k<t;k++) {
		cin>>str1>>str2;
		sort(str1.begin(),str1.end());
		sort(str2.begin(),str2.end());
		i = j = 0;
		str1[i]==str2[j] ? cout<<"Yes" : cout<<"No";
		while(i<str1.length() && j<str2.length()) {
			if(str1[i] == str2[j]) {
				i++;
				j++;
			}
			else if(str1[i] < str2[j]) {
				i++;
				c++;
			}
			else {
				j++;
				c++;
			}
		}
		cout<<i<<" "<<j;
		while(i<str1.length()) {
			i++;
			c++;
		}
		while(j<str2.length()) {
			j++;
			c++;
		}
		cout<<c<<endl;
	}
	return 0;
}

