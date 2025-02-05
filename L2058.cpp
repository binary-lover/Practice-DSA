/*
A critical point in a linked list is defined as either a local maxima or a local minima.

A node is a local maxima if the current node has a value strictly greater than the previous node and the next node.

A node is a local minima if the current node has a value strictly smaller than the previous node and the next node.

Note that a node can only be a local maxima/minima if there exists both a previous node and a next node.

Given a linked list head, return an array of length 2 containing [minDistance, maxDistance] where minDistance is the minimum distance between any two distinct critical points and maxDistance is the maximum distance between any two distinct critical points. If there are fewer than two critical points, return [-1, -1].
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

    // efficient code
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        // code here
        vector<int> ans;
        // if there are less than 4 nodes
        if(head == NULL || head->next == NULL || head->next->next == NULL || head->next->next->next == NULL){
            return {-1, -1};
        }
        int minDistance = INT_MAX;
        int maxDistance = INT_MIN;
        vector<int> criticalpoints;
        vector<int> indexOfCriticalPoints;
        int index = 0;
        ListNode* temp = head;

        // finding the critical points and their indexes
        while(temp->next->next != NULL){
            if((temp->val < temp->next->val && temp->next->val > temp->next->next->val) || (temp->val > temp->next->val && temp->next->val < temp->next->next->val)){
                criticalpoints.push_back(temp->next->val);
                indexOfCriticalPoints.push_back(index);
            }
            temp = temp->next;
            index++;
        }

        // if there are less than 2 critical points
        if(criticalpoints.size() < 2){
            return {-1, -1};
        }

        // finding the minimum distance between the critical points
        for (int i = 0; i < criticalpoints.size()-1; i++){
            if(indexOfCriticalPoints[i+1] - indexOfCriticalPoints[i] < minDistance){
                minDistance = indexOfCriticalPoints[i+1] - indexOfCriticalPoints[i];
            }
        }
        // finding the maximum distance between the critical points
        maxDistance = indexOfCriticalPoints[criticalpoints.size()-1] - indexOfCriticalPoints[0];
        ans.push_back(minDistance);
        ans.push_back(maxDistance);

        return ans;

    }

    // least efficient code
    // vector<int> nodesBetweenCriticalPoints(ListNode* head) {
    //     // code here
    //     vector<int> ans;
    //     // if there are less than 4 nodes
    //     if(head == NULL || head->next == NULL || head->next->next == NULL || head->next->next->next == NULL){
    //         return {-1, -1};
    //     }
    //     int minDistance = INT_MAX;
        
    //     vector<int> criticalpoints;
    //     vector<int> indexOfCriticalPoints;
    //     int index = 0;
    //     ListNode* temp = head;

    //     // finding the critical points and their indexes
    //     while(temp->next->next != NULL){
    //         if((temp->val < temp->next->val && temp->next->val > temp->next->next->val) || (temp->val > temp->next->val && temp->next->val < temp->next->next->val)){
    //             criticalpoints.push_back(temp->next->val);
    //             indexOfCriticalPoints.push_back(index);
    //         }
    //         temp = temp->next;
    //         index++;
    //     }

    //     // if there are less than 2 critical points
    //     if(criticalpoints.size() < 2){
    //         return {-1, -1};
    //     }

    //     // finding the minimum distance between the critical points
        
    //     // if there are only 2 critical points  
    //     if(criticalpoints.size() == 2){
    //         return {indexOfCriticalPoints[1] - indexOfCriticalPoints[0], indexOfCriticalPoints[1] - indexOfCriticalPoints[0]};
    //     }else{
    //         for (int i = 0; i < criticalpoints.size()-1; i++){
    //             if(indexOfCriticalPoints[i+1] - indexOfCriticalPoints[i] < minDistance){
    //                 minDistance = indexOfCriticalPoints[i+1] - indexOfCriticalPoints[i];
    //             }
    //         }
    //     }
    //     // finding the maximum distance between the critical points
    //     int maxDistance = indexOfCriticalPoints[criticalpoints.size()-1] - indexOfCriticalPoints[0];
    //     ans.push_back(minDistance);
    //     ans.push_back(maxDistance);

    //     return ans;

    // }

    
};

int main(){
    ListNode* head = new ListNode(5);
    head->next = new ListNode(3);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(2);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(1);
    head->next->next->next->next->next->next = new ListNode(2);
    Solution obj;
    vector<int> ans = obj.nodesBetweenCriticalPoints(head);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }


    return 0;
}