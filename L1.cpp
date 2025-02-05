/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            if (map.find(diff) != map.end())
            { // if diff is found in map then return the index of diff and i
                return vector<int>{map[diff], i};
            }
            map[nums[i]] = i;
        }
        return vector<int>{0};
    }
};

int main()
{
    Solution s;
    vector<int> nums = {4, 3, 2};
    int target = 5;
    vector<int> result = s.twoSum(nums, target);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}