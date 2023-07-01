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


void preorder(struct Node* root){
    if(root==NULL)
    return;
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct Node* root){
    if(root==NULL)
    return;
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(struct Node* root){
    if(root==NULL)
    return;
    
    postorder(root->right);
    postorder(root->left);
    cout<<root->data<<" ";
}

int main() {
	// your code goes here
	
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root -> right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	
	cout<<"Preorder : ";
	preorder(root);
	cout<<endl;
	cout<<"Inorder : ";
	inorder(root);
	cout<<endl;
	cout<<"Postorder : ";
	postorder(root);
	cout<<endl;
	
	return 0;
}

