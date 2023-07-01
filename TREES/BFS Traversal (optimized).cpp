#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left, *right;
    
    Node(int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};


void bfs(struct Node* root){
    queue<struct Node*> q;
    
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        struct Node* front = q.front();
        q.pop();
        
        if(front!=NULL){
            if(front->left!=NULL)
            q.push(front->left);
            
            if(front->right!=NULL)
            q.push(front->right);
        }
        
        else if(!q.empty())
        q.push(NULL);
        
        if(front!=NULL)
        cout<<front->data<<" ";
    }
}

int main() {
	// your code goes here
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root -> right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	
	bfs(root);
	return 0;
}
