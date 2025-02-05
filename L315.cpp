// 315. Count of Smaller Numbers After Self

// Given an integer array nums, return an integer array counts where counts[i] is the number of smaller elements to the right of nums[i].


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
 int findInsertPosition(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size();
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left;
} // this function is used to find the position where the element should be inserted in the array

vector<int> countSmaller(vector<int>& nums) {
    vector<int> temp;
    vector<int> result(nums.size());

    for (int i = nums.size() - 1; i >= 0; --i) {
        int pos = findInsertPosition(temp, nums[i]);
        result[i] = pos;
        temp.insert(temp.begin() + pos, nums[i]); //
    }

    return result;
}

};
int main(){
    Solution s;
    vector<int> nums = {5,4,3,2,1}; // {1,2,5,6} 
    // {12, 1, 3, 2, 0, 11, 4}; sort = {0, 1, 2, 3, 4, 11, 12}
    vector<int> res = s.countSmaller(nums);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }

    // vector<int> nums1 = {12, 1, 3, 2, 0, 11, 4};
    // // {12, 1, 3, 2, 0, 11, 4}; sort = {0, 1, 2, 3, 4, 11, 12}
    // vector<int> res1 = s.countSmaller(nums1);
    // for(int i=0; i<res1.size(); i++){
    //     cout<<res1[i]<<" ";
    // }


    return 0;
}
