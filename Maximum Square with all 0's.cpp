#include<bits/stdc++.h>
using namespace std;

int findMaxSquareWithAllZeros(int** arr, int row, int col) {
    
    int data[row][col];
    for(int i=0;i<row;i++) {
        if(arr[i][0] == 0) {
            data[i][0] = 1;
        }
        else {
            data[i][0] = 0;
        }
    }
    for(int j=0;j<col;j++) {
        if(arr[0][j] == 0) {
            data[0][j] = 1;
        }
        else {
            data[0][j] = 0;
        }
    }
    for(int i=1;i<row;i++) {
        for(int j=1;j<col;j++) {
            if(arr[i][j] == 1) {
                data[i][j] = 0;
            }
            else {
                int x = min(data[i-1][j],data[i][j-1]);
                data[i][j] = min(x,data[i-1][j-1])+1;
            }
        }
    }
    int max = 0;
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            if(data[i][j] > max) {
                max = data[i][j];
            }
        }
    }
    return max;
}
int main() {
	
	int m,n;
	cin>>m>>n;
	int** arr = new int*[m];
	for(int i=0;i<m;i++) {
		arr[i] = new int[n];
	}
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			cin>>arr[i][j];
		}
	}
	int res = findMaxSquareWithAllZeros(arr,m,n);
	cout<<res;
	return 0;
}
