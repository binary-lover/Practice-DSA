
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> result;
        // sorting nums
        sort(nums.begin(), nums.end());
        // pin i variable an look for j and j+1 if -i = j + [j+1]
        if(nums.size() < 3){
            return result;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            int fix = nums[i];
            int left = i + 1;
            int right = nums.size() - 1;
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            while (left < right)
            {
                if (-fix == nums[left] + nums[right])
                {
                    // sort all three varuable
                    vector<int> temp = {fix, nums[left] , nums[right]};
                    result.push_back(temp);
                    // check duplicate
                    while (left < right && nums[left] == nums[left + 1])
                    {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right - 1])
                    {
                        right--;
                    }

    
                    left++;
                    right--;

                }
                else if (-fix < nums[left] + nums[right])
                {
                    right--;
                }
                else
                {
                    left++;
                }
            }
            // return result
        }
        return result;
    }
    // vector<vector<int>> threeSum(vector<int> &nums)
    // {
    //     vector<vector<int>> result;
    //     int n = nums.size();
    //     if (n < 3)
    //     {
    //         return result;
    //     }
    //     sort(nums.begin(), nums.end());
    //     for (int i = 0; i < n - 2; i++)
    //     {
    //         if (i > 0 && nums[i] == nums[i - 1])
    //         {
    //             continue;
    //         }
    //         int target = -nums[i];
    //         int left = i + 1;
    //         int right = n - 1;
    //         while (left < right)
    //         {
    //             int sum = nums[left] + nums[right];
    //             if (sum == target)
    //             {
    //                 result.push_back({nums[i], nums[left], nums[right]});
    //                 while (left < right && nums[left] == nums[left + 1])
    //                 {
    //                     left++;
    //                 }
    //                 while (left < right && nums[right] == nums[right - 1])
    //                 {
    //                     right--;
    //                 }
    //                 left++;
    //                 right--;
    //             }
    //             else if (sum < target)
    //             {
    //                 left++;
    //             }
    //             else
    //             {
    //                 right--;
    //             }
    //         }
    //     }
    //     return result;
    // }
};

int main()
{
    Solution sol;
    vector<int> nums = {1,2,-3,-1,-1};
    vector<vector<int>> res = sol.threeSum(nums);
    for (auto x : res)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }

    return 0;
}