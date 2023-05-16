#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Node{
    public:
    int data;
    Node* next;
    
    Node(int val){
        data = val;//not val=data
        next = NULL;
    }
};

void reverse(Node* &head){
    Node* prev = NULL;
    Node* current = head;
    Node* next = current->next;
    
    while(current!=NULL){
        current->next = prev;
        prev = current;
        current = next;
        
        if(next!=NULL)
        next = next->next;
    }
    head = prev;
}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}

int main() {
	// your code goes here
	
	Node* head = new Node(1);
	Node* first = new Node(2);
	Node* sec = new Node(3);
	Node* third = new Node(5);
	
	head -> next=first;
	first -> next=sec;
	sec -> next=third;
	third -> next=NULL;
	
	reverse(head);
	print(head);
	
	return 0;
}
