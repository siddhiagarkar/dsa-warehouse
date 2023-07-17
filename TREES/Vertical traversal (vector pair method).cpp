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

void func(struct Node* root, bool flag, int count, vector<pair<int, int>> &v){
    if(root==NULL)
    return;
    
    if(flag==true)  count--;  
    else            count++;
    
    v.push_back(make_pair(count, root->data));
    
    func(root->left, true, count, v);
    func(root->right, false, count, v);
}

int main() {
	// your code goes here
	
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root -> right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	
	vector<pair<int, int>> vec;
	
	func(root, true, 0, vec);
	sort(vec.begin(), vec.end());
	
	for(auto el : vec)
	cout<<el.second<<" ";
	
	return 0;
}
