#include<bits/stdc++.h>
using namespace std;

struct Node {
	
	int data;
	struct Node* left;
	struct Node* right;
};
struct Node* newNode(int data) {
	
	Node* temp = new Node;
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}
void printSol(Node* root) {
	
	cout<<root->data<<" ";
	if(root->left != NULL) {
		printSol(root->left);
	}
	if(root->right != NULL) {
		printSol(root->right);
	}
}
int main() {
	
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int inorder[n],postorder[n];
		for(int i=0;i<n;i++) {
			cin>>inorder[i];
		}
		for(int i=0;i<n;i++) {
			cin>>postorder[i];
		}
		int k=1;
		map<int,int> m;
		for(int i=0;i<n;i++) {
			m.insert(pair<int,int>(inorder[i],k));
			k++;
		}
		Node* root = newNode(postorder[n-1]);
		for(int i=n-2;i>=0;i--) {
			int val = postorder[n-1];
			Node* temp = root;
			start:
			if(m[postorder[i]] < m[val]) {
				while(temp->left != NULL) {
					val = temp->left->data;
					temp = temp->left;
					goto start;
				}
				temp->left = newNode(postorder[i]);
			}
			else {
				while(temp->right != NULL) {
					val = temp->right->data;
					temp = temp->right;
					goto start;
				}
				temp->right = newNode(postorder[i]);
			}
		}
		printSol(root);
	}
	return 0;
}
