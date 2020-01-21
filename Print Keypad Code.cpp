#include<bits/stdc++.h>
using namespace std;

string check(int num) {
    
    switch(num) {
            
        case 1:
            return "";
            break;
        case 2:
            return "abc";
            break;
        case 3:
            return "def";
            break;
        case 4:
            return "ghi";
            break;
        case 5:
            return "jkl";
            break;
        case 6:
            return "mno";
            break;
        case 7:
            return "pqrs";
            break;
        case 8:
            return "tuv";
            break;
        case 9:
            return "wxyz";
            break;
        default:
            return "";
    }
}
void keypad(int num,string output) {
    
    if(num == 0) {
        cout<<output<<endl;
        return;
    }
    int digit = num%10;
    string data = check(digit);
    for(int i=0;i<data.size();i++) {
        keypad(num/10,data[i]+output);
    }
}
void printKeypad(int num){
    
    string str = "";
    keypad(num,str);
}

