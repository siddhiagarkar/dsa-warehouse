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

void topview(struct Node* root, int count, map<int, int> &mp){
    if(root==NULL)
    return;
    
    if(mp[count]==NULL)
    mp[count] = root->data;
    
    topview(root->left, count-1, mp);
    topview(root->right, count+1, mp);
}

int main() {
	// your code goes here
	
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root -> right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->right = new Node(6);
	
	map<int, int> mp;
	topview(root, 0, mp);
	map<int, int> :: iterator iter;
	
	for(iter=mp.begin(); iter!=mp.end(); iter++){
	    cout<<iter->second<<" ";
	}
	
	return 0;
}
