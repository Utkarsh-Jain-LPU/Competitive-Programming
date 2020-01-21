#include<bits/stdc++.h>
using namespace std;

int output[20][20] = {0};

void ratMaze(int **maze,int n,int row,int col) {
    
    if(row==(n-1) && col==(n-1)) {
        output[row][col] = 1;
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                cout<<output[i][j]<<" ";
            }
        }
        cout<<endl;
        return;
    }
    if(col<0 || col>=n || row>=n || row<0 || output[row][col]==1 || maze[row][col]==0) {
        return;
    }
    output[row][col] = 1;
    ratMaze(maze,n,row,col-1);
    ratMaze(maze,n,row,col+1);
    ratMaze(maze,n,row-1,col);
    ratMaze(maze,n,row+1,col);
    output[row][col] = 0;
    return;
}
void ratInAMaze(int **maze, int n) {
    
    ratMaze(maze,n,0,0);
}
int main() {
	
	int n;
	cin>>n;
	int **maze = new int*[n];
	for(int i=0;i<n;i++) {
		maze[i] = new int[n];
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cin>>maze[i][j];
		}
	}
	ratInAMaze(maze,n);
	return 0;
}
