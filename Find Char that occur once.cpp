#include<bits/stdc++.h>
using namespace std;

int main() {
    
    string str;
    cin>>str;
    int start;
    if(str[0]>=65 && str[0]<=90) {
        start = 65;
    }
    else {
        start = 97;
    }
    int len = str.length();
    int data[26] = {0};
    for(int i=0;i<len;i++) {
        data[((int)str[i])-start]++;
    }
    int res;
    for(int i=0;i<26;i++) {
        if(data[i]%2 != 0) {
            res = i;
            break;
        }
    }
    cout<<(char)(res+start);
    return 0;
}
