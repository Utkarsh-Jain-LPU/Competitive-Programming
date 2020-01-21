#include<bits/stdc++.h>
using namespace std;

int main() {
	
    int t;
    cin>>t;
    while(t--) {
    	int n;
    	cin>>n;
    	set<string> s;
    	set<string> :: iterator i;
    	map<string,int> m;
    	while(n--) {
    		int x;
    		string str;
    		cin>>str>>x;
    		stringstream ss;
    		ss<<x;
    		string abc;
    		ss>>abc;
			m[str+abc]++;	
			s.insert(str);
		}
		int count = 0;
		for(i=s.begin();i!=s.end();i++) {
			
			if(m[(*i)+'0'] > m[(*i)+'1']) {
				count += m[(*i)+'0'];
			}
			else {
				count += m[(*i)+'1'];
			}
		}
		cout<<count<<endl;
	}
    return 0;
}

