#include<bits/stdc++.h>
using namespace std;

int main() {
	int k,t,n;
	cin>>t;
	for(k=0;k<t;k++) {
		cin>>n;
		int c,min,e;
		c = n/12;
		if(n%12 != 0) {
			c++;
		}
		min = (12*(c-1))+1;
		if(n < min+6) {
			e = ((min+6)+((min+5)-n));
		}
		else {
			e = ((min+5)-(n-(min+6)));
		}
		if(n%6==0 || n%6==1) {
			cout<<e<<" WS"<<endl;
		}
		else if(n%6==2 || n%6==5) {
			cout<<e<<" MS"<<endl;
		}
		else {
			cout<<e<<" AS"<<endl;
		}
	}
	return 0;
}

