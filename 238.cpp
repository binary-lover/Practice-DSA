/*
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.


*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int prod = 1;
        bool setZero = false;
        int zerocount = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                setZero = true;
                zerocount++;
            }
            else
            {
                prod *= nums[i];
            }
        }
        if(zerocount>1){
            for (int i = 0; i < nums.size(); i++)
            {
                nums[i]=0;
            }
            return nums;
            
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (setZero && nums[i] == 0)
            {
                nums[i] = prod;
                continue;
            }
            else if (setZero && nums[i] != 0)
            {
                nums[i] = 0;
                continue;
            }
            nums[i] = prod / nums[i];
        }

        return nums;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {0,0};
    vector<int> res = obj.productExceptSelf(nums);
    for (auto i : res)
    {
        cout << i << " ";
    }
    return 0;
}