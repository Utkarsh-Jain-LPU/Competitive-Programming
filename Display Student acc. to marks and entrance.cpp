#include<bits/stdc++.h>
using namespace std;

int main() {
	int i,n;
	cin>>n;
	int f,s,t;
	string nm,name[n];
	int fn[n],sn[n],tn[n],total[n];
	for(i=0;i<n;i++) {
		cin>>nm>>f>>s>>t;
		name[i] = nm;
		fn[i] = f;
		sn[i] = s;
		tn[i] = t;
		total[i] = f+s+t;
	}
	multiset<int ,greater<int> > set;
	multiset<int> :: iterator p;
	for(i=0;i<n;i++) {
		set.insert(total[i]);
	} 
	int x=1;
	int arr[n] = {0};
	for(p=set.begin();p!=set.end();p++) {
		for(i=0;i<n;i++) {
			if(total[i]==*p && arr[i]==0) {
				cout<<x++<<" "<<name[i]<<endl;
				arr[i] = 1;
				break;
			}
		}
	} 
	return 0;
}

