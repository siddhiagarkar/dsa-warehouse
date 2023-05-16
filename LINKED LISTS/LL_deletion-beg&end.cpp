#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Node{
    public:
    int data;
    Node* next;
    
    Node(int val){
        data = val;
        next = NULL;
    }
};

void delete_from_beginning(Node* &head){
    Node* pseudo_head = head;
    head = head -> next;
    pseudo_head-> next = NULL;
}

void delete_from_end(Node* head){
    while(head->next->next!=NULL){
        head = head->next;
    }
    head->next = NULL;
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head ->next;
    }
}

int main() {
	// your code goes here
	Node* head = new Node(11);
	Node* first = new Node(22);
	Node* sec = new Node(33);
	Node* third = new Node(44);
	
	head -> next = first;
	first -> next = sec;
	sec -> next = third;
	third -> next = NULL;
	
// 	delete_from_beginning(head);
	delete_from_end(head);
	print(head);
	
	
	return 0;
}
