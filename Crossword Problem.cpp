#include<bits/stdc++.h>
using namespace std;

bool visited[20] = {false};
void resetVertical(char board[10][10],int n,int row,int col,bool record[]) {
    
    for(int i=0;i<n;i++) {
        if(record[i] == true) {
            board[row+i][col] = '-';
        }
    }
}
void resetHorizontal(char board[10][10],int n,int row,int col,bool record[]) {
    
    for(int i=0;i<n;i++) {
        if(record[i] == true) {
            board[row][col+i] = '-';
        }
    }
}
void setVertical(char board[10][10],string word,int n,int row,int col,bool record[]) {
    
    for(int i=0;i<n;i++) {
        if(board[row+i][col] == '-') {
            board[row+i][col] = word[i];
            record[i] = true;
        }
        else {
            record[i] = false;
        }
    }
}
void setHorizontal(char board[10][10],string word,int n,int row,int col,bool record[]) {
    
    for(int i=0;i<n;i++) {
        if(board[row][col+i] == '-') {
            board[row][col+i] = word[i];
            record[i] = true;
        }
        else {
            record[i] = false;
        }
    }
}
bool checkVertical(char board[10][10],string word,int n,int row,int col) {
    
    if(row+n > 10) {
        return false;
    }
    for(int i=0;i<n;i++) {
        if(board[row+i][col]!='-' && board[row+i][col]!=word[i]) {
            return false;
        }
    }
    return true;
}
bool checkHorizontal(char board[10][10],string word,int n,int row,int col) {
    
    if(col+n > 10) {
        return false;
    }
    for(int i=0;i<n;i++) {
        if(board[row][col+i]!='-' && board[row][col+i]!=word[i]) {
            return false;
        }
    }
    return true;
}
bool crossword(char board[10][10],string word[],int n,int row,int col) {
    
    if(row == 10) {
        for(int i=0;i<10;i++) {
            for(int j=0;j<10;j++) {
                cout<<board[i][j];
            }
            cout<<endl;
        }
        return true;
    }
    if(board[row][col] == '+') {
        if(col+1 < 10) {
            return crossword(board,word,n,row,col+1);
        }
        else {
            return crossword(board,word,n,row+1,0);
        }
    }
    if(board[row][col] != '-') {
        int len;
        string data;
        for(int loc=0;loc<n;loc++) {
            if(!visited[loc]) {
                data = word[loc];
                len = data.length();
            }
            else {
                continue;
            }
            bool ch_hor = checkHorizontal(board,data,len,row,col);
            if(ch_hor) {
                bool res;
                bool record[len] = {false};
                setHorizontal(board,data,len,row,col,record);
                visited[loc] = true;
                if(col+1 < 10) {
                    res = crossword(board,word,n,row,col+1);
                }
                else {
                    res = crossword(board,word,n,row+1,0);
                }
                if(res) {
                    return true;
                }
                resetHorizontal(board,len,row,col,record);
                visited[loc] = false;
            }
            bool ch_ver = checkVertical(board,data,len,row,col);
            if(ch_ver) {
                bool res;
                bool record[len] = {false};
                setVertical(board,data,len,row,col,record);
                visited[loc] = true;
                if(col+1 < 10) {
                    res = crossword(board,word,n,row,col+1);
                }
                else {
                    res = crossword(board,word,n,row+1,0);
                }
                if(res) {
                    return true;
                }
                resetVertical(board,len,row,col,record);
                visited[loc] = false;
            }
        }
        if(row+1 < 10) {
            return crossword(board,word,n,row,col+1);
        }
        else {
            return crossword(board,word,n,row+1,0);
        }
    }
    for(int loc=0;loc<n;loc++) {
        int len;
        string data;
        if(!visited[loc]) {
            data = word[loc];
            len = data.length();
        }
        else {
            continue;
        }
        bool ch_hor = checkHorizontal(board,data,len,row,col);
        if(ch_hor) {
            bool res;
            bool record[len] = {false};
            setHorizontal(board,data,len,row,col,record);
            visited[loc] = true;
            if(col+1 < 10) {
                res = crossword(board,word,n,row,col+1);
            }
            else {
                res = crossword(board,word,n,row+1,0);
            }
            if(res) {
                return true;
            }
            resetHorizontal(board,len,row,col,record);
            visited[loc] = false;
        }
        bool ch_ver = checkVertical(board,data,len,row,col);
        if(ch_ver) {
            bool res;
            bool record[len] = {false};
            setVertical(board,data,len,row,col,record);
            visited[loc] = true;
            if(col+1 < 10) {
                res = crossword(board,word,n,row,col+1);
            }
            else {
                res = crossword(board,word,n,row+1,0);
            }
            if(res) {
                return true;
            }
            resetVertical(board,len,row,col,record);
            visited[loc] = false;
        }
    }
    return false;
}
int main() {
    
    int n=0;
    string words;
    char board[10][10];
    for(int i=0;i<10;i++) {
        for(int j=0;j<10;j++) {
            cin>>board[i][j];
        }
    }
    cin>>words;
    for(int i=0;i<words.length();i++) {
        if(words[i] == ';') {
            n++;
        }
    }
    n++;
    int t=0;
    string temp="",word[n];
    for(int i=0;i<words.length();i++) {
        if(words[i] != ';') {
            temp += words[i];
        }
        else {
            word[t++] = temp;
            temp = "";
        }
    }
    word[t++] = temp;
    crossword(board,word,n,0,0);
}
