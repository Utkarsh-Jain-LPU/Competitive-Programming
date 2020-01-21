#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n,k;
	cin>>n>>k;
	multiset<int,greater<int> > s;
	int data[k],res[k];
	for(int i=0;i<n;i++) {
		int x;
		cin>>x;
		s.insert(x);
	}
	for(int i=0;i<k;i++) {
		cin>>data[i];
	}
	multiset<int> :: iterator it;
	int index=0,count=0;
	while(index < k) {
		count++;
		it = s.begin();
		int temp = *it;
		s.erase(s.begin());
		if(data[index] == count) {
			res[index] = temp;
			index++;
		}
		s.insert(temp/2);
	}
	for(int i=0;i<k;i++) {
		cout<<res[i]<<" ";
	}
	return 0;
}


