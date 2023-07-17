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

void go(struct Node* root){
    if(root==NULL)
    return;
    
    go(root->right);
    cout<<root->data<<" ";
}

void boundary_traversal(struct Node* root){
    if(root==NULL)
    return;
    
    cout<<root->data<<" ";
    boundary_traversal(root->left);
    go(root->right);
}

int main() {
	// your code goes here
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root -> right = new Node(3);
	root->left->left = new Node(4);
	root->left->left->left = new Node(7);
	root->left->right = new Node(5);
	root->left->right->right = new Node(8);
	root->right->right = new Node(6);
	
	boundary_traversal(root);
	return 0;
}