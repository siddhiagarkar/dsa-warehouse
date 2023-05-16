#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Node{
    int data;
    struct Node* next;
    
    Node(int val){
        data = val;
        next = NULL;
    }
};

void del_a_node(struct Node* &head, int position){
    struct Node* curr = head;
    if(position==1){
        head = head-> next;
        free(curr);
    }
    
    else{
        int pos = 1;
        while(pos!=position-1){
            curr = curr-> next;
            pos++;
        }
        Node* x = curr->next;
        curr->next = x-> next;
        free(x);
    }
}

void print(struct Node* head){
    while(head->next!=NULL){
        cout<<head->data<<" ";
        head = head-> next;
    }
    cout<<head->data<<" ";
}

int main() {
	// your code goes here
	
	struct Node* head = new Node(1);
	struct Node* first = new Node(2);
	struct Node* second = new Node(3);
	struct Node* third = new Node(4);
	struct Node* fourth = new Node(5);
	
	head -> next = first;
	first -> next = second;
	second -> next = third;
	third -> next = fourth;
	fourth -> next = NULL;
	
	int position;
	cin>>position;
	
	del_a_node(head, position);
	print(head);
	
	
	return 0;
}
