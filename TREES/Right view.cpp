#include <bits/stdc++.h>
using namespace std;

struct Node{
    struct Node* left, *right;
    int data;
    
    Node(int val){
        data = val;
        left=NULL;
        right = NULL;
    }
};

void right_view(struct Node* root, int level){
    if(root==NULL)
    return;
    
    queue<struct Node*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i=0; i<n; i++)
        {
            if(q.front()->left!=NULL)
            q.push(q.front()->left);
            // swap lines 25,26 with 28,29 to make it left view
            if(q.front()->right!=NULL)
            q.push(q.front()->right);
            
            if(i==n-1)
            cout<<q.front()->data<<" ";
            
            q.pop();
        }
    }
}

int main() {
	// your code goes here
	
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root -> right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	
	right_view(root, 0);
}
