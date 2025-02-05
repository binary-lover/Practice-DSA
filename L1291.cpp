// leetcode solution of problem 1291

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int arr[36] = { 12, 23, 34, 45, 56, 67, 78, 89, 123, 234, 345, 456, 567, 678, 789, 1234, 2345, 3456, 4567, 5678, 6789, 12345, 23456, 34567, 45678, 56789, 123456, 234567, 345678, 456789, 1234567, 2345678, 3456789, 12345678, 23456789, 123456789};
        vector<int> ans;
        int x = 0;
        while(x<36){
            if (arr[x] >= low && arr[x] <= high)
            {
                ans.push_back(arr[x]);
            }
            x++;
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> ans = s.sequentialDigits(1100,3300);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
// Output: 123 234
// Explanation: The numbers are 123, 234
// Time Complexity: O(1)
// Space Complexity: O(1)
