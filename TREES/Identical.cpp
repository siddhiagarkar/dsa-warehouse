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

bool checkIdentical(struct Node* root, struct Node* head){
    if(root==NULL && head==NULL)
    return true;
    
    else if(root==NULL || head==NULL)
    return false;
    
    else{
        bool bool1 = root->data == head->data; //important condition. dont miss out
        bool bool2 = checkIdentical(root->left, head->left);
        bool bool3 = checkIdentical(root->right, head->right);
        
        if(bool3==true && bool2==true && bool1==true)
        return true;
        
        else
        return false;
    }
}

int main() {
	// your code goes here
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root -> right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	
	struct Node* head = new Node(1);
	head->left = new Node(2);
	head -> right = new Node(3);
	head->left->left = new Node(4);
	head->left->right = new Node(5);
	
// 	cout<<checkIdentical(root, head);
    if(checkIdentical(root, head) == 1)
    cout<<"identical trees"<<endl;
    else
    cout<<"non identical trees"<<endl;
	
	return 0;
}