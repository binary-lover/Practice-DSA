/*
Given an integer array nums and an integer k, return true if nums has a good subarray or false otherwise.

A good subarray is a subarray where:
    its length is at least two, and
    the sum of the elements of the subarray is a multiple of k.

Note that:
    A subarray is a contiguous part of the array.
    An integer x is a multiple of k if there exists an integer n such that x = n * k. 0 is always a multiple of k.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int j = 1;
        int sum = 0;
        int size = nums.size();
        for (int i = 0; i < size; i++)
        {
                cout<<i<<" "<<j<<endl;
            sum+=nums[i];
            if(sum%k==0 && i>=j){
                cout<<"sum%k "<<sum<<" "<<k<<(sum%k)<<endl;
                return true;
            }
            if(i==size-1){
                sum = 0;
                i = j-1;
                j++;
            }
        }
        return false;
        
    }
};

int main(){
    Solution sol;
    vector<int> nums = {23,2,4,6,6};
    int k = 7;
    cout << sol.checkSubarraySum(nums, k) << endl;
    return 0;
}