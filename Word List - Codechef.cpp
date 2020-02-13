#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	string line;
	getline(cin,line);
	set<string> s;
	while(n--) {
		getline(cin,line);
		int len = line.length();
		string data = "";
		for(int i=0;i<len;i++) {
			if((line[i]>='a'&&line[i]<='z') || (line[i]>='A'&&line[i]<='Z')) {
				data += line[i];
			}
			else {
				if(data != "") {
					transform(data.begin(),data.end(),data.begin(),::tolower);
					s.insert(data);
				}
				data = "";
			}
		}
		transform(data.begin(),data.end(),data.begin(),::tolower);
		s.insert(data);
	}
	s.erase("");
	cout<<s.size()<<endl;
	set<string> :: iterator k;
	for(k=s.begin();k!=s.end();k++) {
		cout<<*k<<endl;
	}
	return 0;
}
