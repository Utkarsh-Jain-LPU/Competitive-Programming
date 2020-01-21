#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	map<int,int> mp;
	map<int,int> :: iterator it;
	map< int, int, greater<int> > m;
	cin>>n;
	for(int i=0;i<n;i++) {
		int x,y;
		cin>>x>>y;
		m.insert(pair<int,int>(x,y));
	}
	int max=0;
	for(it=m.begin();it!=m.end();it++) {
		int x = it->first;
		int y = it->second;
		if(y > max) {
			max = y;
		}
		x = x/2;
		mp.insert(pair<int,int>(x,max));
	}
	int start=0,area=0;
	for(it=mp.begin();it!=mp.end();it++) {
		int x = it->first;
		int y = it->second;
		area += (x-start)*y;
		start = x;
	}
	cout<<2*area;
	return 0;
}

