// 315. Count of Smaller Numbers After Self

// Given an integer array nums, return an integer array counts where counts[i] is the number of smaller elements to the right of nums[i].


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> temp = nums;
        sort(temp.begin(),temp.end());
        
     
    }
};
int main(){
    Solution s;
    vector<int> nums = {5,2,6,1};
    vector<int> res = s.countSmaller(nums);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }


    return 0;
}