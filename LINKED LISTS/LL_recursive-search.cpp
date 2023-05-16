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

bool search(Node* head, int x){
    
    if(head==NULL)
    return false;

    else if(head->data == x)
    return true;
    
    return search(head->next, x);
    //return keyword important
}

int main() {
	// your code goes here
	
	Node* head = new Node(1);
	Node* first = new Node(2);
	Node* sec = new Node(3);
	Node* thir = new Node(4);
	Node* four = new Node(5);
	
	head -> next = first;
	first -> next = sec;
	sec -> next = thir;
	thir -> next = four;
	four -> next = NULL;
	
	print(head);
	search(head, 6) ? cout<<"YES" : cout<<"NO";
	
	return 0;
}
