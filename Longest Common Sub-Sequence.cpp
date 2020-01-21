#include<bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2) {
    
    int m,n;
    m = s1.length();
    n = s2.length();
    int data[m+1][n+1];
    for(int i=0;i<=m;i++) {
        data[i][0] = 0;
    }
    for(int i=0;i<=n;i++) {
        data[0][i] = 0;
    }
    for(int i=1;i<=m;i++) {
        for(int j=1;j<=n;j++) {
            if(s1[i-1] == s2[j-1]) {
                data[i][j] = 1+data[i-1][j-1];
            }
            else {
                data[i][j] = max(data[i-1][j],data[i][j-1]);
            }
        }
    }
    return data[m][n];
}
int main() {
	
	string s1,s2;
	cin>>s1>>s2;
	int res = lcs(s1,s2);
	cout<<res;
	return 0;
}
