#include<bits/stdc++.h>
using namespace std;

int Solve(string s1,string s2,int m,int n,int** dp) {
    
    if(m == 0) {
        return n;
    }
    if(n == 0) {
        return m;
    }
    if(dp[m][n] != -1) {
        return dp[m][n];
    }
    if(s1[0] == s2[0]) {
        return Solve(s1.substr(1),s2.substr(1),m-1,n-1,dp);
    }
    int option1 = 1+Solve(s1.substr(1),s2.substr(1),m-1,n-1,dp);
    int option2 = 1+Solve(s1.substr(1),s2,m-1,n,dp);
    int option3 = 1+Solve(s1,s2.substr(1),m,n-1,dp);
    int temp = min(option1,option2);
    int res = min(temp,option3);
    dp[m][n] = res;
    return res;
}
int editDistance(string s1,string s2) {
    
    int m,n;
    m = s1.length();
    n = s2.length();
    int** dp = new int*[m+1];
    for(int i=0;i<=m;i++) {
        dp[i] = new int[n+1];
        for(int j=0;j<=n;j++) {
            dp[i][j] = -1;
        }
    }
    int res = Solve(s1,s2,m,n,dp);
    return res;
}
int main() {
	
	string s1,s2;
	cin>>s1>>s2;
	int res = editDistance(s1,s2);
	cout<<res;
	return 0;
}
