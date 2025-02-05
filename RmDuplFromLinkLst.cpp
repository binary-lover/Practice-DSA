/*
Remove all occurences of duplicates in a linked list

Given a sorted linked list, delete all nodes that have duplicate numbers (all occurrences), leaving only numbers that appear once in the original list, and return the head of the modified linked list. 
*/

#include <bits/stdc++.h>
using namespace std;

/* Linked List node structure

struct Node {
    int data;
    struct Node *next;
};

*/

struct Node {
    int data;
    struct Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        
        Node* dummy = new Node(0);
        dummy->next = head;
        Node* prev = dummy;
        Node* curr = head;
        while(curr){
            if(curr->next && curr->data == curr->next->data){
                while(curr->next && curr->data == curr->next->data){
                    curr = curr->next;
                }
                prev->next = curr->next;
            }else{
                prev = prev->next;
            }
            curr = curr->next;
        }
        return dummy->next;
    }
};

int main(){
    Solution s;
    Node* head = new Node(2);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(4);
    head->next->next->next->next->next = new Node(5);

    Node* res = s.removeAllDuplicates(head);
    while(res){
        cout<<res->data<<" ";
        res = res->next;
    }
    cout<<endl;

    return 0;
}