#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int value){
        data = value;
        left, right = NULL;
    }
};

int maxDepth(struct Node* root){
    if(root==NULL)
    return 0;
    
    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);
    
    return 1+max(lh, rh);
}

int main() {
	// your code goes here
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->right->right = new Node(5);
	
	cout<<maxDepth(root)<<endl;

	return 0;
}
