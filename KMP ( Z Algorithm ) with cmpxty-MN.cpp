#include<cstring>
#include<bits/stdc++.h>
using namespace std;

int KMP(string text,string pattern,int lent,int lenp) {
	int i,j,c=0,ptr,lp,lt,ld;
	string ptn,txt,data;
	txt = text;
	ptn = pattern;
	lt = lent;
	lp = lenp;
	ld = lt+lp+1;
	int arr[ld];
	arr[0] = 0;
	data = ptn+"$"+txt;
	i=0,j=1,ptr=1;
	while(ptr < ld) {
		if(data[j] == data[i]) {
			c++;
			j++;
			i++;
		}
		else {
			arr[ptr] = c;
			ptr++;
			j = ptr;
			c = 0;
			i = 0;
		}
	}
	for(i=0;i<ld;i++) {
		if(arr[i] == lp) {
			return i-lp;
		}
	}
	return 0;
}

int main() {
	int lp,lt,res;
	string ptn,txt;
	cin>>txt;
	cin>>ptn;
	lt = txt.length();
	lp = ptn.length();
	res = KMP(txt,ptn,lt,lp);
	cout<<res;
	return 0;
}

