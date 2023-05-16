#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
    
    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void add(int data, int position, struct Node* &head){
    struct Node* newnode = new Node(data);
    struct Node* pseudo_head = NULL;
    pseudo_head=head;

    if(position==1){
        newnode->prev = NULL;
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
    
    else{
        int pos=1;
        while(pos!=position-1){
            pseudo_head = pseudo_head->next;
            pos++;
        }
        
        if(pseudo_head->next==NULL){
            newnode->next=NULL;
            newnode->prev=pseudo_head;
            pseudo_head->next=newnode;
        }
        
        else{
            newnode->next= pseudo_head->next;
            pseudo_head->next->prev=newnode;
            
            pseudo_head->next = newnode;
            newnode->prev = pseudo_head;
        }
        
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

	head -> next = first;
	first -> next = second;
	second -> next = third;
	third -> next = NULL;
	
	head->prev=NULL;
	first->prev = head;
	second->prev = first;
	third->prev = second;

	add(12, 5, head);
	print(head);
	
	
	return 0;
}
