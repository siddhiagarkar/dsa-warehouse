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

int maxPathSumUtil(struct Node* root, int &ans){
    if(root==NULL)
    return 0;
    
    int left = maxPathSumUtil(root->left, ans);
    int right = maxPathSumUtil(root->right, ans);
    
    int nodeMax = max(max(root->data, root->data + left), 
                  max(root->data + right, root->data + left + right));
    
    ans = max(ans, nodeMax);
    int singlePathSum = max(root->data, max(root->data + left, root->data + right));
    return singlePathSum;
}

int maxPathSum(struct Node* root){
    int ans = INT_MIN;
    ans = maxPathSumUtil(root, ans);
    return ans;
}

int main() {
	// your code goes here
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root -> right = new Node(3);
	root->left->left = new Node(4);
// 	root->left->left->right = new Node(6);
	root->left->right = new Node(5);
	
	cout<<maxPathSum(root)<<endl;
	
	return 0;
}