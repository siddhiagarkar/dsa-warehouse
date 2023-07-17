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

bool sym_func(struct Node* root, struct Node* head){
    if(root==NULL && head==NULL)
    return true;
    
    else if(root==NULL || head==NULL)
    return false;
    
    // else if(root->data == head->data)
    // return true;
    // ye likha toh 1 pe hi true return ho jaayega without any further recursion
    
    else if(root->data != head->data)
    return false;
    // while traversing downwards only if this happens, final answer will be returned
    
    bool x = sym_func(root->left, head->right);
    bool y = sym_func(root->right, head->left);
    
    if(x==true && y==true)
    return true;
    
    else
    return false;
}

int main() {
	// your code goes here
	
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root -> right = new Node(2);
	root->left->left = new Node(4);
	root->right->right = new Node(4);
	
	cout<<sym_func(root, root)<<endl;
}
