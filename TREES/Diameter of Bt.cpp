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

// DIAMETER AT ANY NODE :
// MAX (DIAMETER THROUGH THE NODE, LEFT SUBTREE DIAMETER, RIGHT SUBTREE DIAMETER)
// DIAMETER THROUGH THE NODE = lh + rh + 1
// For left and right subtree diameters, call functions

int maxDepth(struct Node* root){
    if(root==NULL)
    return 0;
    
    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);
    
    return 1+max(lh, rh);
}

int diameter(struct Node* root){
    if(root==NULL)
    return 0;
    
    int curr_ht = maxDepth(root->left) + maxDepth(root->right) + 1; 

    int ld = diameter(root->left);
    int rd = diameter(root->right);
    
    return max(curr_ht , max(ld, rd));
}

int main() {
	// your code goes here
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root -> right = new Node(3);
	root->left->left = new Node(4);
// 	root->left->left->right = new Node(6);
	root->left->right = new Node(5);
	
	cout<<diameter(root);
	return 0;
}