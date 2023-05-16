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

void rev(Node* &head){
    stack<Node*> s;
    
    while(head!=NULL){
        s.push(head);
        head = head -> next;
    }
    //head=NULL here
    
    head = s.top();
    s.pop();
    Node* pseudo_head = head;
    
    while(!s.empty()){
        pseudo_head -> next = s.top();
        
        pseudo_head = s.top();
        
        s.pop();
    }
    
    pseudo_head->next = NULL;
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
	
	rev(head);
	print(head);

cout<<endl<<"head at "<<head->data;
	
	return 0;
}
