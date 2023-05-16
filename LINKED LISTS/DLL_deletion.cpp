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

// void deleteNode(Node** head_ref, Node* del) 
// { 
//     /* base case */
//     if (*head_ref == NULL || del == NULL) 
//         return; 
  
//     /* If node to be deleted is head node */
//     if (*head_ref == del) 
//         *head_ref = del->next; 
  
//     /* Change next only if node to be 
//     deleted is NOT the last node */
//     if (del->next != NULL) 
//         del->next->prev = del->prev; 
  
//     /* Change prev only if node to be 
//     deleted is NOT the first node */
//     if (del->prev != NULL) 
//         del->prev->next = del->next; 
  
//     /* Finally, free the memory occupied by del*/
//     free(del); 
//     return; 
// } 
// This was a better approach as the TC and SC were O(1)!

void del(struct Node* &head, int position){
    struct Node* curr = head->next;
    struct Node* pseudo_head = head;
    
    if(position==1){
        curr->prev = NULL;
        free(head);
        head = curr;
    }
    
    else{
        for(int pos=1; pos<position-1; pos++){
            pseudo_head=pseudo_head->next;
            curr=pseudo_head->next;//node to be freed
        }
        pseudo_head->next = curr->next;
        if(curr->next!=NULL)
        curr->next->prev = pseudo_head;
        free(curr);
    }
    
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
	
	del(head, 4);
	print(head);
	
	return 0;
}
