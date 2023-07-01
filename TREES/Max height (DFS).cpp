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

int max_ht(struct Node* root, int ht){
    if(root==NULL)
    return ht;
    ht++;
    return max(max_ht(root->left, ht), max_ht(root->right, ht));
}

int main() {
	// your code goes here
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->right->right = new Node(5);
	
	cout<<maxDepth(root)<<endl;
	
	cout<<max_ht(root, 0)<<endl;

	return 0;
}
