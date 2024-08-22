// Leetcode: 153. Find Minimum in Rotated Sorted Array

// Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

// [4,5,6,7,0,1,2] if it was rotated 4 times.
// [0,1,2,4,5,6,7] if it was rotated 7 times.
// Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

// Given the sorted rotated array nums of unique elements, return the minimum element of this array.

// You must write an algorithm that runs in O(log n) time.


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        int count = 0;
        while (left <= right)
        {
            int mid = left + (right - left)/2;
            if ((mid == 0 || nums[mid] < nums[mid - 1]) && (mid == nums.size() - 1 || nums[mid] < nums[mid + 1])) {
            return nums[mid];
        }
            if(nums[mid] > nums[right]){
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        return nums[left];
    }
};

            
            // cout<<"mid: "<<mid<<endl;
            // count++;
            // if(count == 20){
            //     break;
            // }

int main(){
    Solution s;

    vector<int> nums = {3,4,5,1,2};
    cout<<s.findMin(nums)<<endl;
    cout<<endl;

    vector<int> nums2 = {3,4,5,6,7,8,1,2};
    cout<<s.findMin(nums2)<<endl;
    cout<<endl;
    
    vector<int> nums3 = {8,1,2,3,4,5,6,7};
    cout<<s.findMin(nums3)<<endl;
    cout<<endl;
    
    vector<int> nums4 = {2,3,4,5,1};
    cout<<s.findMin(nums4)<<endl;

    
    vector<int> nums5 = {1,2,3,4,5,6,7};
    cout<<s.findMin(nums5)<<endl;

    return 0;
}