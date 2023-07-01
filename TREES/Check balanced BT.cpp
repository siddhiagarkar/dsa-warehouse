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

int maxDepth(struct Node* root){
    if(root==NULL)
    return 0;
    
    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);
    
    return 1+max(lh, rh);
}

bool check_balanced(struct Node* root){
    if(abs(maxDepth(root->left) - maxDepth(root->right)) > 1)
    return false;
    
    else
    return true;
}

int main() {
	// your code goes here
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root -> right = new Node(3);
	root->left->left = new Node(4);
	root->left->left->right = new Node(6);
	root->left->right = new Node(5);
	
	if(check_balanced(root) == false)
	cout<<"UNBALANCED"<<endl;
	
	else
	cout<<"BALANCED"<<endl;
	
	return 0;
}



