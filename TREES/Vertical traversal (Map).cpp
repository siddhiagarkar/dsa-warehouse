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

void func(struct Node* root, int count, map<int,vector<int>> &mp){
    if(root==NULL)
    return;
    
    mp[count].push_back(root->data);
    
    func(root->left, count-1, mp);
    func(root->right, count+1, mp);
}

int main() {
	// your code goes here
	
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root -> right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	
	map<int , vector<int>> mp;
	
	func(root, 0, mp);
	
	map<int , vector<int>> :: iterator i; //wow
	
	for(i=mp.begin(); i!=mp.end(); i++) //"<" operator not allowed
	{
	    for(auto element : i->second)  //not m[i] or i.second (i is a pointer)
	    cout<<element<<" ";
	}
	
	return 0;
}
