#include<bits/stdc++.h>
using namespace std;

class Graph {
	
	int V;
	int** mat;
	public:
	Graph(int v);
	Insert(int x,int y);
	Display(int s);
	freeSpace();
};
Graph::Graph(int v) {
	
	this->V = v;
	this->mat = new int*[v];
	for(int i=0;i<v;i++) {
		mat[i] = new int[v];
		for(int j=0;j<v;j++) {
			mat[i][j] = 0;
		}
	}
}
Graph::Insert(int x,int y) {
	
	mat[x][y] = 1;
	mat[y][x] = 1;
}
Graph::Display(int s) {
	
	bool* visited = new bool[V];
	for(int i=0;i<V;i++) {
		visited[i] = false;
	}
	queue<int> que;
	que.push(s);
	visited[s] = true;
	while(!que.empty()) {
		int x = que.front();
		cout<<"-> "<<x;
		que.pop();
		for(int i=0;i<V;i++) {
			if(mat[x][i] == 1) {
				if(visited[i] == false) {
					que.push(i);
					visited[i] = true;
				}
			}
		}
	}
}
Graph::freeSpace() {
	
	for(int i=0;i<V;i++) {
		delete mat[i];
	}
	delete mat;
}
int main() {
	
	int n;
	cin>>n;
	Graph gh(n);
	for(int i=0;i<n;i++) {
		int x,y;
		cin>>x>>y;
		gh.Insert(x,y);
	}
	int x;
	cin>>x;
	gh.Display(x);
	gh.freeSpace();
	return 0;
}

