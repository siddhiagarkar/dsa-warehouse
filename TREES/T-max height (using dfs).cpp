#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int value){
        data = value;
        left, right = NULL;
    }
};

void inorder(struct Node* root, int h, vector<int> &v){
    if(root==NULL)
    return;
    
    h++;
    inorder(root->left, h, v);
    v.push_back(h);
    // cout<<h<<" ";

    inorder(root->right, h, v);
    h--;
    
}

int main() {
	// your code goes here
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->right->right = new Node(5);
	vector<int> v;
	inorder(root, 0, v);
	
// 	for(auto el: v)
// 	cout<<el<<" ";
    int maxht = *max_element(v.begin(), v.end());
    cout<<maxht<<endl;
	
	return 0;
}