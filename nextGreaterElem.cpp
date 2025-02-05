// Given an array arr[ ] of n elements, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
// If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
        std::map<int, int> mp;
        vector<long long> s;
        vector<long long> result;
        
        for(int i = 0; i < n; i++){
            if(!s.empty()){
                cout<<arr[s.back()]<<" "<<arr[i]<<endl;
            }
        
            // cout<<arr[s.back()]<<" "<<arr[i]<<endl;
            while(!s.empty() && arr[s.back()] < arr[i]){
                mp[s.back()] = i;
                s.pop_back();
            }
            s.push_back(i);
        }
    
        while(!s.empty()){
            mp[s.back()] = -1;
            s.pop_back();
        }
        for(int i = 0; i < n; i++){
            result.push_back(mp[i] == -1 ? -1 : arr[mp[i]]);
        }
        return result;
    }
    // vector<long long> nextLargerElement(vector<long long> arr, int n){
    //     std::map<int,int> mp;
    //     stack<int> s;
    //     vector<long long> result;
    //     for (int i = n-1; i >= 0; i--){
    //         while(!s.empty() && s.top() <= arr[i]){
    //             s.pop();
    //         }
    //         if(s.empty()){
    //             mp[arr[i]] = -1;
    //         }
    //         else{
    //             mp[arr[i]] = s.top();
    //         }
    //         s.push(arr[i]);
    //     }
    //     for (int i = 0; i < n; i++){
    //         result.push_back(mp[arr[i]]);
    //     }
    //     return result;
    // }
};

int main()
{
    Solution s;
    vector<long long> arr = {6, 8, 0, 1, 3};
    vector<long long> result = s.nextLargerElement(arr, arr.size());
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}