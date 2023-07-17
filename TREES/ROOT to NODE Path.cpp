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

void root_to_node(struct Node* root, int node, vector<int> vec){
    if(root==NULL)
    return;
    
    vec.push_back(root->data);
    
    if(root->data == node)
    {
        for(auto e: vec)
        cout<<e<<" ";
        
        return;
    }
    
    root_to_node(root->left, node, vec);
    root_to_node(root->right, node, vec);
    
    vec.pop_back();
    
}

int main() {
	// your code goes here
	
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root -> right = new Node(3);
	root->left->left = new Node(4);
	root->right->right = new Node(5);
	root->right->right->left = new Node(7);
	
	vector<int> vec;
	
	root_to_node(root, 7, vec);
// 	for(auto el: vec)
//     cout<<el<<" ";
}
