#include<iostream>
using namespace std;

class Node
{
public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    };
    
};

void insertAtHead(Node* &head, int val){ 
    Node * newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void deleteAdHead(Node* &head){
    Node* temp = head;
    head = head->next;
    free(temp);
}

void insertAtTail(Node* &head, int val){
    Node * new_node = new Node(val);

    Node* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }

    temp->next = new_node;  
    
}

void deleteAtTail(Node* &head){
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    free(temp->next->next);
    temp->next=NULL;
}

void insertAtPosition(Node * &head, int val, int pos){
    Node* new_node = new Node(val);
    Node * temp = head;
    int Current_pos = 0;

    if (pos == 0)
    {
        insertAtHead(head,val);
    }

    while (Current_pos != pos-1)
    {
        temp = temp->next;
        Current_pos++;
    }
    new_node->next=temp->next;
    temp->next=new_node;
    
}

void updateAtPos(Node* &head, int val, int pos){
    Node* temp = head;
    int Current_pos = 0;

    while (Current_pos != pos)
    {
        temp = temp->next;
        Current_pos++;
    }
    temp->val = val;
    
}

void dispaly(Node * head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->val<<"->";
        temp = temp->next;
    } 
    cout<<"NULL\n";
    
}

int main(){
    Node* head = NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,6);
    // insertAtTail(head,2);
    // insertAtTail(head,3);
    // dispaly(head);
    insertAtPosition(head,7,3);
    // dispaly(head);
    updateAtPos(head, 99, 2);
    dispaly(head);
    // deleteAdHead(head);
    // dispaly(head);

    deleteAtTail(head);
    dispaly(head);
    
    
    return 0;
}
