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
    
    struct Node* mover = head;
    cout<<mover->data<<" ";
    mover=mover->next;
    
    while(mover!=head){
        cout<<mover->data<<" ";
        mover = mover->next;
    }
}

void addEnd(struct Node* last, int data){
    struct Node* new_node = new Node(data);
    
    new_node->next= last->next;
    last->next = new_node;
}

void addBeginning(struct Node* last, int data, struct Node* &head){
    struct Node* new_node = new Node(data);

    new_node->next= last->next;
    last->next = new_node;
    
    head = new_node;
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
	third->next=head;
	
	addBeginning(third, 44, head);//not working when head is replaced with third->next
	addEnd(third, 22);
	print(head);
	
	return 0;
}
