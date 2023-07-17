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

struct Node* lca(struct Node* root, Node* p, Node* q){
    if(root==NULL || root==p || root==q)
    return root;
    
    Node* l = lca(root->left, p, q);
    Node* r = lca(root->right, p, q);
    
    
    // if(l == NULL)
    // return r;
    
    // else if(r == NULL)
    // return l;
    
    // else
    // return root;
    
    if(l==NULL && r==NULL)
    return NULL;
    
    else if(l==NULL)
    return r;
    
    else if(r==NULL)
    return l;
    
    else //when l is not null and r is not null
    return root;
}

int main() {
	// your code goes here
	
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root -> right = new Node(3);
	root -> right->left = new Node(8);
	root->left->left = new Node(4);
	root->right->right = new Node(5);
	root->right->right->left = new Node(7);
// 	8, 7
	cout<<lca(root, root->right->left, root->right->right->left)->data<<endl;
}
