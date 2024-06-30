/*
Given a doubly Linked list and a position. The task is to delete a node from a given position (position starts from 1) in a doubly linked list and return the head of the doubly Linked list.

*/

#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;

  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }

};

class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        if(x == 1){
            Node* temp = head;
            head = head->next;
            // if head is not NULL then set the previous of head to NULL
            if(head){
                head->prev = NULL;
            }
            delete temp;
            return head;
        }
        // if x is not 1 then traverse the list to find the node at position x - 1
        Node* curr = head;
        for(int i = 1; curr != NULL && i < x - 1; i++){
            curr = curr->next;
        }
        if(curr == NULL || curr->next == NULL){
            return head;
        }
        Node* temp = curr->next;
        curr->next = temp->next;
        if(temp->next){
            temp->next->prev = curr;
        }
        delete temp;
        return head;
    }
};

int main(){
    Solution ob;
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->prev = head;
    head->next->next = new Node(30);
    head->next->next->prev = head->next;
    head->next->next->next = new Node(40);
    head->next->next->next->prev = head->next->next;
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->prev = head->next->next->next;
    int x = 20;
    head = ob.deleteNode(head, x);
    while(head){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;

    
    
    return 0;
}