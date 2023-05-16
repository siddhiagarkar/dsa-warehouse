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

void print(struct Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

void reversal(struct Node* &head){
    stack<struct Node*> s;
    struct Node* temp = head;
    while(temp!=NULL){
        s.push(temp);
        // cout<<s.top()->data<<" ";
        temp = temp->next;
    }
    
    head = s.top();
    struct Node* curr = NULL;
    struct Node* pseudo_head = head;
    
    while(!s.empty()){
        head=s.top();
        s.pop();
        head->prev = curr;
        curr=head;
        
        if(!s.empty())
        head->next = s.top();
        else
        head->next = NULL;
    }
    head = pseudo_head;
   
}

int main() {
	// your code goes here
	
	struct Node* head = new Node(1);
	struct Node* first = new Node(2);
	struct Node* second = new Node(3);
	struct Node* third = new Node(4);
	
	head->next = first;
	first->next = second;
	second->next = third;
	third->next=NULL;
	
	head->prev=NULL;
	first->prev=head;
	second->prev=first;
	third->prev=second;
	
	reversal(head);
	print(head);
	
	return 0;
}
