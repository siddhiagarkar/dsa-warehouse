#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Node{
  int data;
  struct Node* left, *right;
  
  Node(int val){
      data=val;
      left=NULL;
      right=NULL;
  }
};

struct Node* create(int value){
    struct Node* new_node = new Node(value);
    new_node->left=NULL;
    new_node->right=NULL;
    return new_node;
}

void printInorder(struct Node* root){
    
    if(root==NULL)
    return;
    
    printInorder(root->left); //left subtree
    cout<<root->data<<" "; //root
    printInorder(root->right); //right subtree
    return; //can skip this return statement
}

void printPreorder(struct Node* root){
    if(root==NULL)
    return;
    
    cout<<root->data<<" ";  //root
    printPreorder(root->left); //left subtree
    printPreorder(root->right); //right subtree
}

void printPostorder(struct Node* root){
    if(root==NULL)
    return;
    
    printPostorder(root->left); //left subtree
    printPostorder(root->right); //right subtree
    cout<<root->data<<" "; //root
}


int main() {
	// your code goes here
	struct Node* root = create(1);
	root->left = create(2);
	root->right = create(3);
	root->left->left = create(4);
	root->left->right = create(5);
	
	cout<<"Inorder : ";
	printInorder(root);
	cout<<endl;
	cout<<"Preorder : ";
	printPreorder(root);
	cout<<endl;
	cout<<"Postorder : ";
	printPostorder(root);
	
	
	return 0;
}


