#include<bits/stdc++.h>
using namespace std;

int output[10][10] = {0};

bool ispossible(int n,int row,int col) {
    
    for(int i=row-1;i>=0;i--) {
        if(output[i][col] == 1) {
            return false;
        }
    }
    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--) {
        if(output[i][j] == 1) {
            return false;
        }
    }
    for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++) {
        if(output[i][j] == 1) {
            return false;
        }
    }
    return true;
}
void queens(int n,int row) {
    
    if(row == n) {
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                cout<<output[i][j]<<" ";
            }
        }
        cout<<endl;
        return;
    }
    for(int col=0;col<n;col++) {
        if(ispossible(n,row,col)) {
            output[row][col] = 1;
            queens(n,row+1);
            output[row][col] = 0;
        }
    }
    return;
}
void placeNQueens(int n) {
    
    queens(n,0);
}
int main() {
	
	int n;
	cin>>n;
	placeNQueens(n);
	return 0;
}
