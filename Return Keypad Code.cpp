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
int solve(string data,string output[],int n) {
    
    int k=0;
    int size = (data.size())*n;
    string *temp = new string[size];
    for(int i=0;i<data.size();i++) {
        for(int j=0;j<n;j++) {
            temp[k++] = output[j]+data[i];
        }
    }
    for(int i=0;i<size;i++) {
        output[i] = temp[i];
    }
    return size;
}
int keypad(int num,string output[]) {
    
    if(num == 0) {
        output[0] = "";
        return 1;
    }
    int digit = num%10;
    int count = keypad(num/10,output);
    string data = check(digit);
    int size = solve(data,output,count);
    return size;
}
int main() {
	
	int n;
	cin>>n;
	int size = pow(4,7);
	string *output = new string[size];
	int count = keypad(n,output);
	for(int i=0;i<count;i++) {
		cout<<output[i]<<endl;
	}
	return 0;
}
