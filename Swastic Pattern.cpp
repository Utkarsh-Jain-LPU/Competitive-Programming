#include<iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    char** arr = new char*[n];
    for(int i=0;i<n;i++) {
        arr[i] = new char[n];
        for(int j=0;j<n;j++) {
            arr[i][j] = '@';
        }
    }
    for(int i=0;i<n;i++) {
        arr[i][n/2] = '*';
        arr[n/2][i] = '*';
    }
    for(int i=0;i<=(n/2);i++) {
    	arr[i][0] = '*';
    	arr[0][n-i-1] = '*';
    	arr[n-1][i] = '*';
    	arr[n-i-1][n-1] = '*';
	}
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
        	if(arr[i][j] == '*') {
        		cout<<arr[i][j];
			}
			else {
				cout<<' ';
			}
        }
        cout<<endl;
    }
    return 0;
}

