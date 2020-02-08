#include<bits/stdc++.h>
using namespace std;

class Graph {
	
	int V;
	int** arr;
	public:
		Graph(int n);
		void Insert(int x,int y);
		void DFS(int x);
		void Solve(queue<int> q,bool* v);
		void freeSpace();
};
Graph::Graph(int n) {
	
	this->V = n;
	arr = new int*[n];
	for(int i=0;i<n;i++) {
		arr[i] = new int[n];
		for(int j=0;j<n;j++) {
			arr[i][j] = 0;
		}
	}
}
void Graph::Insert(int x,int y) {
	
	arr[x][y] = 1;
	arr[y][x] = 1;
}
void Graph::DFS(int s) {
	
	queue<int> q;
	q.push(s);
	bool* visited = new bool[V];
	for(int i=0;i<V;i++) {
		visited[i] = false;
	}
	visited[s] = true;
	Solve(q,visited);
}
void Graph::Solve(queue<int> q,bool* visited) {
	
	while(!q.empty()) {
		int x = q.front();
		cout<<"-> "<<x;
		q.pop();
		queue<int> temp;
		for(int i=0;i<V;i++) {
			if(arr[x][i]==1 && !visited[i]) {
				temp.push(i);
				visited[i] = true;
			}
		}
		Solve(temp,visited);
	}
}
void Graph::freeSpace() {
	
	for(int i=0;i<V;i++) {
		delete arr[i];
	}
	delete arr;
}
int main() {
	
	int v,e;
	cin>>v>>e;
	Graph g(v);
	for(int i=0;i<e;i++) {
		int a,b;
		cin>>a>>b;
		g.Insert(a,b);
	}
	int x;
	cin>>x;
	g.DFS(x);
	g.freeSpace();
	return 0;
}

