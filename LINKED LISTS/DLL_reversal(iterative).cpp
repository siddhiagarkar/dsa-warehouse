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

void rev(struct Node* &head){
    struct Node* curr = head->next;
    struct Node* head_copy = head;
    //deal with one head at a time.
    // as in, fix its next and prev then move further
    while(head!=NULL){
        head_copy = head;
        head->next = head->prev;
        head->prev = curr;
        
        head = curr;
        if(curr!=NULL)
        curr = curr->next;
    }
    head = head_copy;
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
	
	rev(head);
	print(head);
	
	return 0;
}
