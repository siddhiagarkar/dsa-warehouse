#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Node{
    public:
    
    int data;
    Node* next;
    
    Node(int value){
        data = value;
        next = NULL;
    }
};

void printList(Node* n){
    while(n!=NULL){
        cout<< n -> data << endl;
        n = n -> next;
    }
}

void insert_beginning(Node* &head, int data){
    Node* new_node = NULL;
    new_node = new Node(data);
    new_node -> next = head; 
    head = new_node;
}

void insert_after(Node* prev_node, int data){
    Node* new_node = NULL;
    new_node = new Node(data);
    new_node -> next = prev_node -> next;
    // prev_node -> next = *new_node;
    prev_node -> next = new_node;
}


void append(Node* &head, int data){
   Node* new_node = NULL;
   new_node = new Node(data);
   new_node -> next = NULL;
   Node* last = head;
   while(last->next!=NULL){
       last = last->next;
   }
   last->next = new_node;
}

int main() {
	// your code goes here

	Node* head = new Node(5);	
	Node* first = new Node(8);	
	Node* second = new Node(7);
	
	head -> next = first;
	first -> next = second;
	second -> next = NULL;

cout<<"head : "<<head<<endl; //0x55d18af81eb0

	insert_beginning(head, 1);
	
	insert_after(first, 27);
	
	append(head, 444);
	
	printList(head);
	return 0;
}