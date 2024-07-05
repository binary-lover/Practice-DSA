/*
Given a non-empty array nums[] of integers of length N, find the top k elements which have the highest frequency in the array. If two numbers have same frequencies, then the larger number should be given more preference.

*/
#include <bits/stdc++.h>
using namespace std;

clss Solution{
      public:
    vector<int> topK(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==k){
            return nums;
        }
        unordered_map<int, int> freq;
        for(int i=0; i<n; i++){
            freq[nums[i]]++;
        }
        // If two numbers have same frequencies, then the larger number should be given more preference.
        vector<int> res;

        // finding top k elements
        // approach: use loop to find max k elements
        for(int i=0; i<k; i++){
            int max = 0;
            int max_key = 0;
            for(auto j: freq){
                if(j.second > max){
                    max = j.second;
                    max_key = j.first;
                }
            }
            res.push_back(max_key);
            freq[max_key] = 0;
        }

        
        return res;
    }
};

int main(){
    Solution obj;
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;
    vector<int> res = obj.topK(nums, k);
    for(auto i: res){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}   