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

void print(Node* head){
    Node* temp = head;
    
    while(temp!=NULL){
        cout<< temp->data << endl;
        temp = temp->next;
    }
}

int length(Node* head, int count){
    
    if(head==NULL)
    return count;

    else
    count++;
    
    return length(head->next, count);
}

int main() {
	// your code goes here
	
	Node* head = new Node(1);
	Node* first = new Node(2);
	Node* sec = new Node(3);
	Node* thir = new Node(4);

	head -> next = first;
	first -> next = sec;
	sec -> next = thir;
	thir -> next = NULL;
	
	print(head);
	cout<<"length : "<< length(head, 0);
	
	return 0;
}


