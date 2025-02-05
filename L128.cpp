/*
Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {

        map<int, int> mp;
        if(nums.size()==0){
            return 0;
        }
        int longest = 1;
        int temp = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]] = 1;
        }

        map<int, int>::iterator it = mp.begin();
        while (it != mp.end())
        {
            // cout << "Key: " << it->first<< ", Value: " << it->second << endl;
            if(it != prev(mp.end()) && next(it) != mp.end()){
                if(next(it)->first - it->first == 1){
                    // cout<<it->first<<" "<<next(it)->first<<endl;
                    temp++;
                    longest = temp>longest?temp:longest;
                }
                else{
                    temp = 0;
                }
            }

            ++it;
        }

        return longest;
    }

    // least efficient soluton
    // int longestConsecutive(vector<int>& nums) {

    //     map<int, int> mp;
    //     int longest=0;
    //     int temp=0;
    //     int least =0;
    //     int most = 0;
    //     for(int i=0; i<nums.size(); i++){
    //         mp[nums[i]] = 1;
    //         least = nums[i] < least ? nums[i] : least;
    //         most = nums[i] > most ? nums[i] : most;
    //     }

    //     cout<<least<<" "<<most<<endl;

    //     int mpsize = mp.size();
    //     for(int i = least; i <= most; i++){
    //          if(mp[i]==1){
    //             temp++;
    //             longest = temp>longest?temp:longest;
    //         }else{

    //             temp = 0;
    //         }
    //     }
    //     return longest;
    // }
};

int main()
{
    Solution obj;
    vector<int> nums = { 0, 1, 2, 4, 8, 5, 6, 7, 9, 3, 55, 88, 77, 99, 999999999 };
    cout << obj.longestConsecutive(nums) << endl;
    vector<int> nums2 = { -1, 0, 1, 2, 4, 8, 5, 6, 7, 9, 3, 55, 88, 77, 99, 999999999 };
    cout << obj.longestConsecutive(nums2) << endl;
    return 0;
}