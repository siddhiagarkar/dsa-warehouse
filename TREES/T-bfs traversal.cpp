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

void bfs_traversal(struct Node* root){
    queue<struct Node*> q;
    vector<vector<struct Node*>> v_of_v;
    vector<struct Node*> level_vector;
    
    q.push(root);
    
    while(!q.empty()){
        level_vector.clear();
        int size = q.size();
        
        for(int i=0; i<size; i++){
            if(q.front()->left!=NULL)
            q.push(q.front()->left);
            
            if(q.front()->right!=NULL)
            q.push(q.front()->right);
            
            level_vector.push_back(q.front());
            q.pop();
        }
        
        v_of_v.push_back(level_vector);
    }
    
    for(auto vec : v_of_v){
        for(auto node: vec) // do not write level_vector here. it has been replenishing along the way
        cout<<node->data<<" ";
        cout<<endl;
    }
}


int main() {
	// your code goes here
	struct Node* root = create(1);
	root->left = create(2);
	root->right = create(3);
	root->left->left = create(4);
	root->left->right = create(5);
	
	bfs_traversal(root);
	
	return 0;
}

