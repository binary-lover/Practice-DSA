/*
Given the coordinates of the endpoints(p1,q1, and p2,q2) of the two line segments. Check if they intersect or not. If the Line segments intersect return true otherwise return false.

Note: Please check the intersection lies within the line segments.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string doIntersect(int p1[], int q1[], int p2[], int q2[]) {
        
        // all vectors
        int p1q1[] = {q1[0]-p1[0],q1[1]-p1[1]};
        int p1p2[] = {p2[0]-p1[0],p2[1]-p1[1]};
        int p1q2[] = {q2[0]-p1[0],q2[1]-p1[1]};
        int p2q2[] = {q2[0]-p2[0],q2[1]-p2[1]};
        int p2p1[] = {p1[0]-p2[0],p1[1]-p2[1]};
        int p2q1[] = {q1[0]-p2[0],q1[1]-p2[1]};


        // cross prod
        int p1q1xp1p2 = p1q1[0] * p1p2[1] - p1q1[1] * p1p2[0];
        int p1q1xp1q2 = p1q1[0] * p1q2[1] - p1q1[1] * p1q2[0];
        int p2q2xp2p1 = p2q2[0] * p2p1[1] - p2q2[1] * p2p1[0];
        int p2q2xp2q1 = p2q2[0] * p2q1[1] - p2q2[1] * p2q1[0]; 
        

        int c1xc2 = p1q1xp1p2 * p1q1xp1q2;
        int c3xc4 = p2q2xp2p1 * p2q2xp2q1;

        if(c1xc2 < 0 || c3xc4 < 0 ){
            return "true";
        }
        
        
        return "false";
    }
};

int main(){
    
    int p1[] = {82, 73}, q1[] = {75, -18}, p2[] = {16, 63}, q2[] = {80, 47};
    Solution obj;
    cout<<obj.doIntersect(p1, q1, p2, q2);
    return 0;
}