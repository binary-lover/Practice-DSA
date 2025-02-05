// #include<iostream>
// #include<vector>
// using namespace std;

// class Solution {
// public:
//     int removeDuplicates(int* arr) {
//         int size = sizeof(arr) / sizeof(arr[0]);
//         cout<<size;
//         // int index = 0;
//         // for (int i = 0; i < size; i++)
//         // {
//         //     int leftPointer = arr[i];
//         //     int rightPointer = arr[i+1];
//         //     if(leftPointer!=rightPointer){
//         //         arr[index]=leftPointer;
//         //         index++;
//         //     }
//         //     if(i==size-1){
//         //         arr[index] = leftPointer;
//         //     }
            
//         // }
//         // return index;
        
//     }
// };

// int main()
// {
//     Solution solution;
//     int prices[]= {0,0,1,1,1,2,2,3,3,4};
//     int size = sizeof(prices);
//     cout<<size;
//     int k = solution.removeDuplicates(prices);
//     // cout<<endl<<"k is: "<<k<<endl;
    
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums)
     {
        nums.resize(std::distance(nums.begin(), unique(nums.begin(), nums.end())));
        return size(nums);
    }
};
int main()
{
    Solution solution;
    vector<int> nums = {1,1};
    int k = solution.removeDuplicates(nums);
    cout << endl << "k is: " << k << endl;
    
    return 0;
}



