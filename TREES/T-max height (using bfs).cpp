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


void max_height(struct Node* root){
    queue<struct Node*> q;
    q.push(root);
    int height=0;
    while(!q.empty()){
        int size = q.size();
        for(int i=0; i<size; i++){
            if(q.front()->left!=NULL)
            q.push(q.front()->left);
            if(q.front()->right!=NULL)
            q.push(q.front()->right);
            
            q.pop();
        }
        height++;
    }
    cout<<height<<endl;
}

int main() {
	// your code goes here
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	
	max_height(root);
	
	return 0;
}

