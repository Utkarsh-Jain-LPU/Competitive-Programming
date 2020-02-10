#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int t=0;
	int arr[n][2];
	int pl1=0,pl2=0;
	for(int i=0;i<n;i++) {
		int a,b;
		cin>>a>>b;
		pl1 += a;
		pl2 += b;
		int lead = abs(pl1-pl2);
		arr[t][0] = lead;
		arr[t][1] = (pl1>pl2)?1:2;
		t++;
	}
	int ld=0,pl;
	for(int i=0;i<n;i++) {
		if(arr[i][0] > ld) {
			ld = arr[i][0];
			pl = arr[i][1];
		}
	}
	cout<<pl<<" "<<ld;
	return 0;
}

