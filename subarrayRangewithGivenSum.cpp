#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int>& arr, int tar) {
        int sum = 0;
        int count = 0;
        unordered_map<int,int> mp;
        for(int i=0; i< arr.size();i++){
            sum += arr[i];
            if(sum == tar){
                count++;
            }

            if(mp.find(sum-tar) != mp.end()){ // if sum-tar is present in the map
                count += mp[sum-tar]; // add the count of that sum to the count
            //    cout<<count<<endl;
            }
            // cout<<sum<<" "<<mp[sum]<<endl;
            mp[sum]++; // increment the count of sum
        }
        return count;
        
    }
};

int main(){
    Solution s;
    vector<int> arr = {10, 2, -2, -20, 10};
    int tar = -10;
    cout<<s.subArraySum(arr,tar);
    return 0;
}