/*
2181. Merge Nodes in Between Zeros

You are given the head of a linked list, which contains a series of integers separated by 0's. The beginning and end of the linked list will have Node.val == 0.

For every two consecutive 0's, merge all the nodes lying in between them into a single node whose value is the sum of all the merged nodes. The modified list should not contain any 0's.

Return the head of the modified linked list.

*/

#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        // just iterate the linked list
        ListNode* temp = head;

        while(temp){
            if(temp->val == 0){
                ListNode* temp2 = temp->next;
                // previos node
                ListNode* prev = temp;

                int sum = 0;
                while(temp2 && temp2->val != 0 ){
                    sum += temp2->val;
                    temp2 = temp2->next;
                }
                temp->val = sum;
                temp->next = temp2;

            }
            temp = temp->next;
        }
        // delete last node
        temp = head;
        while(temp->next->next){
            temp = temp->next;
        }
        temp->next = NULL;
        
        return head;
    }
};
int main(){
    ListNode* head = new ListNode(0);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(0);
    head->next->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next->next = new ListNode(6);
    head->next->next->next->next->next->next->next->next = new ListNode(0);

    Solution s;
    ListNode* res = s.mergeNodes(head);
    while(res){
        cout << res->val << " ";
        res = res->next;
    }
    
    return 0;
}