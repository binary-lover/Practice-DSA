#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Approach 1: Using Priority Queue (efficient)
    // vector<int> topKFrequent(vector<int>& nums, int k) {
    //     int n = nums.size();
    //     if(n==k){
    //         return nums;
    //     }
    //     unordered_map<int, int> freq;
    //     for(int i=0; i<n; i++){
    //         freq[nums[i]]++;
    //     }
    //     // print value of freq
    //     for(auto i: freq){
    //         cout << i.first << " " << i.second << endl;
    //     }
    //     vector<int> res;
    //     // finding top k elements

    //     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    //     for(auto i: freq){
    //         pq.push({i.second, i.first});
    //         if(pq.size() > k){
    //             pq.pop();
    //         }
    //     }
    //     while(!pq.empty()){
    //         res.push_back(pq.top().second);
    //         pq.pop();
    //     }

    //     return res;
    // }

    // Approach 2: Using Loop to find max k elements (least efficient)
    // vector<int> topKFrequent(vector<int>& nums, int k) {
    //     int n = nums.size();
    //     if(n==k){
    //         return nums;
    //     }
    //     unordered_map<int, int> freq;
    //     for(int i=0; i<n; i++){
    //         freq[nums[i]]++;
    //     }
    //     vector<int> res;
    //     // finding top k elements
    //     // approach: use loop to find max k elements
    //     for(int i=0; i<k; i++){
    //         int max = 0;
    //         int max_key = 0;
    //         for(auto j: freq){
    //             if(j.second > max){
    //                 max = j.second;
    //                 max_key = j.first;
    //             }
    //         }
    //         res.push_back(max_key);
    //         freq[max_key] = 0;
    //     }

    //     return res;
    // }

    // Approach 3: by sorting the array based on frequency
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        int n = nums.size();
        if (n == k)
        {
            return nums;
        }
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[nums[i]]++;
        }
        vector<int> res;
        // finding top k elements
        // approach: sort freq based on value without creating a new vector
        vector<pair<int, int>> vec(freq.begin(), freq.end());
        sort(vec.begin(), vec.end(), [](const pair<int, int> &a, const pair<int, int> &b)
             {
                 return a.second > b.second; // Sorting in descending order based on value
             });

        for (int i = 0; i < k; i++)
        {
            res.push_back(vec[i].first);
        }

        return res;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;
    vector<int> res = s.topKFrequent(nums, k);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}