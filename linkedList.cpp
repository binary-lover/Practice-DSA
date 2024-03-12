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
    insertAtHead(head,4);
    insertAtHead(head,34);
    dispaly(head);
    
    return 0;
}
