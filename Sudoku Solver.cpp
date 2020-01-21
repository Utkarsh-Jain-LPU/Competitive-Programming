#include<bits/stdc++.h>
using namespace std;

bool check(int board[][9],int n,int row,int col) {
    
    for(int i=0;i<9;i++) {
        if(board[row][i] == n) {
            return false;
        }
    }
    for(int i=0;i<9;i++) {
        if(board[i][col] == n) {
            return false;
        }
    }
    if(row < 3) {
        if(col < 3) {
            for(int i=0;i<3;i++) {
                for(int j=0;j<3;j++) {
                    if(board[i][j] == n) {
                        return false;
                    }
                }
            }
        }
        else if(col > 5) {
            for(int i=0;i<3;i++) {
                for(int j=6;j<9;j++) {
                    if(board[i][j] == n) {
                        return false;
                    }
                }
            }
        }
        else {
            for(int i=0;i<3;i++) {
                for(int j=3;j<6;j++) {
                    if(board[i][j] == n) {
                        return false;
                    }
                }
            }
        }
    }
    else if(row > 5) {
        if(col < 3) {
            for(int i=6;i<9;i++) {
                for(int j=0;j<3;j++) {
                    if(board[i][j] == n) {
                        return false;
                    }
                }
            }
        }
        else if(col > 5) {
            for(int i=6;i<9;i++) {
                for(int j=6;j<9;j++) {
                    if(board[i][j] == n) {
                        return false;
                    }
                }
            }
        }
        else {
            for(int i=6;i<9;i++) {
                for(int j=3;j<6;j++) {
                    if(board[i][j] == n) {
                        return false;
                    }
                }
            }
        }
    }
    else {
        if(col < 3) {
            for(int i=3;i<6;i++) {
                for(int j=0;j<3;j++) {
                    if(board[i][j] == n) {
                        return false;
                    }
                }
            }
        }
        else if(col > 5) {
            for(int i=3;i<6;i++) {
                for(int j=6;j<9;j++) {
                    if(board[i][j] == n) {
                        return false;
                    }
                }
            }
        }
        else {
            for(int i=3;i<6;i++) {
                for(int j=3;j<6;j++) {
                    if(board[i][j] == n) {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}
bool res;
bool sudoku(int board[][9],int row,int col) {
    
    if(row == 9) {
        return true;
    }
    if(board[row][col] == 0) {
        for(int d=1;d<=9;d++) {
            bool abc;
            bool sol = check(board,d,row,col);
            if(sol) {
                board[row][col] = d;
                if(col+1 < 9) {
                    abc = sudoku(board,row,col+1);
                }
                else {
                    abc = sudoku(board,row+1,0);
                }
                if(abc) {
                    return true;
                }
                board[row][col] = 0;
            }
        }
        return false;
    }
    else {
        if(col+1 < 9) {
            return sudoku(board,row,col+1);
        }
        else {
            return sudoku(board,row+1,0);
        }
    }
}
bool sudokuSolver(int board[][9]){
    
    return sudoku(board,0,0);
}
int main() {
	int board[9][9];
	for(int i=0;i<9;i++) {
		for(int j=0;j<9;j++) {
			cin>>board[i][j];
		}
	}
	bool res = sudokuSolver(board);
	cout<<endl<<endl;
	if(res) {
		for(int i=0;i<9;i++) {
			for(int j=0;j<9;j++) {
				cout<<board[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	else {
		cout<<"Not Possible"; 
	}
	return 0;
}

