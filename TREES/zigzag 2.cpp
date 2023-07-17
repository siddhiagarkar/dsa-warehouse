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
    stack<struct Node*> s;
    stack<struct Node*> s1;
    
    s.push(root);
    cout<<root->data<<" ";
    bool flag = true;
    
    // while(!s.empty() || !s1.empty()){
        while(!s.empty()){
            if(flag==true){
                if(s.top()->right!=NULL){
                s1.push(s.top()->right);
                cout<<s.top()->right->data<<" ";
                }
                
                if(s.top()->left!=NULL){
                    s1.push(s.top()->left);
                    cout<<s.top()->left->data<<" ";
                }
            }
            
            else{
                if(s.top()->left!=NULL){
                    s1.push(s.top()->left);
                    cout<<s.top()->left->data<<" ";
                }
                
                if(s.top()->right!=NULL){
                    s1.push(s.top()->right);
                    cout<<s.top()->right->data<<" ";
                }
            }
            
            s.pop();
            if(s.empty() && !s1.empty()){
                swap(s, s1);
                flag = !flag;
            }
        }
        
        // while(!s1.empty()){
        //     if(s1.top()->left!=NULL){
        //         s.push(s1.top()->left);
        //         cout<<s1.top()->left->data<<" ";
        //     }
            
        //     if(s1.top()->right!=NULL){
        //         s.push(s1.top()->right);
        //         cout<<s1.top()->right->data<<" ";
        //     }
            
        //     s1.pop();
        // }

}

int main() {
	// your code goes here
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root -> right = new Node(3);
	root->left->left = new Node(4);
	root->left->left->left = new Node(7);
	root->left->right = new Node(5);
	root->left->right->right = new Node(8);
	root->right->right = new Node(6);
	
	zigzag(root);
	return 0;
}