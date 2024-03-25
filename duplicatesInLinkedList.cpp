#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class LinkedList{
public:
    Node* head;

    LinkedList(){
        head = NULL;
    }

    void insertAtTail(int value){
        Node * tail = new Node(value);
        if (head == NULL)
        {
            head = tail;
            return;
        }

        Node* temp = head;

        while (temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = tail;
    }

    void display(){
        Node* temp = head;
        while (temp!=NULL)
        {
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }  

    void removeDumplicates(){
        Node* temp = head;
        while (temp->next!=NULL)
        {
            if (temp->val!=temp->next->val)
            {
                temp = temp->next;
                cout<<"true ";
            }else{
                Node * temp2 = temp->next; 
                temp->next = temp->next->next;
                free(temp2);
            }
            
        }
        cout<<endl;
    }
};

int main(){
    LinkedList li;
    li.insertAtTail(4);
    li.insertAtTail(5);
    li.insertAtTail(6);
    li.insertAtTail(6);
    li.insertAtTail(7);
    li.insertAtTail(7);
    li.insertAtTail(7);
    li.insertAtTail(8);
    li.display();
    li.removeDumplicates();
    li.display();
    return 0;
}