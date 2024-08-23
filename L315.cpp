// 315. Count of Smaller Numbers After Self

// Given an integer array nums, return an integer array counts where counts[i] is the number of smaller elements to the right of nums[i].


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int binarySearch(vector<int>& arr,int k){
        int left = 0;
        int right = arr.size() -1;

        while(left <= right){
            int mid = left + (right - left)/2;
            if(k==arr[mid]){
                return mid;
            }
            else if (k > arr[mid]){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }

        return -1;
    }
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> temp = nums;
        sort(temp.begin(),temp.end());
        vector<int> result;
        for ( int i = 0; i < nums.size();i++){
            int target = nums[i];
            int newIndex = binarySearch(temp,target);

            if(newIndex>i){
                int add = newIndex - i;
                result[i] = add;
            }
        }
        return result;
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
