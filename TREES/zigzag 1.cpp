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

void zigzag(struct Node* root){
    queue<struct Node*> q;
    q.push(root);
    q.push(NULL);
    bool i=false;
    vector<int> level_vec;
    cout<<root->data<<" ";
    while(!q.empty()){
        if(q.front()!=NULL){
            if(q.front()->left != NULL){
             q.push(q.front()->left);
             level_vec.push_back(q.front()->left->data);
            }
            
            if(q.front()->right != NULL){
                q.push(q.front()->right);
                level_vec.push_back(q.front()->right->data);
            }
        }
        
        else if(!q.empty()){
            if(q.size()>1)
            q.push(NULL);
            
            if(i==false && level_vec.size()!=0)
            reverse(level_vec.begin(), level_vec.end());
            
            if(level_vec.size()!=0){
                for(auto x : level_vec)
                cout<<x<<" ";
            }
            
            i = !i;
            
            level_vec.clear();
        }
        
        q.pop();
    }
}

int main() {
	// your code goes here
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root -> right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->right = new Node(6);
	
	zigzag(root);
	return 0;
}