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


void bfs(struct Node* root){
    queue<struct Node*> q;
    q.push(root);

    while(!q.empty()){
        vector<int> level_vector;
        int size = q.size();
        
        for(int i=0; i<size; i++){
            if(q.front()->left!=NULL)
            q.push(q.front()->left);
            
            if(q.front()->right!=NULL)
            q.push(q.front()->right);
            
            level_vector.push_back(q.front()->data);
            q.pop();
        }
        
        for(auto el : level_vector)
        cout<<el<<" ";
    }
    
}

int main() {
	// your code goes here
	
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root -> right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	
	bfs(root);
	return 0;
}

