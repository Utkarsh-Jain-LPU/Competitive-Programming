#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	string line;
	vector<string> v;
	vector<string> main;
	vector<string> :: iterator k;
	getline(cin,line);
	while(n--) {
		getline(cin,line);
		int len = line.length();
		string data="";
		for(int i=0;i<len;i++) {
			if((line[i]>='a'&&line[i]<='z') || (line[i]>='A'&&line[i]<='Z')) {
				data += line[i];
			}
			else {
			    v.push_back(data);
				data = "";
			}
		}
		string main_str = "";
		v.push_back(data);
		reverse(v.begin(),v.end());
		for(k=v.begin();k!=v.end();k++) {
			if(*k != "") {
		        main_str += (*k)+" ";
			}
		}
		main.push_back(main_str);
		v.clear();
	}
	reverse(main.begin(),main.end());
	for(k=main.begin();k!=main.end();k++) {
		cout<<*k<<endl;
	}
	return 0;
}

