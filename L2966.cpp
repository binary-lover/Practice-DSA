#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> v;                                                
        sort(nums.begin(), nums.end());                                                
        for (int i = 0; i + 2 < nums.size(); ++i) {                   
            if (i % 3 == 0) {                                       
                if (nums[i + 2] - nums[i] <= k) {                                
                    v.push_back({nums[i], nums[i + 1], nums[i + 2]});         
                } else {
                    return {};                                         
                }
            }
        }
        return v;      
    }
};

int main() {
    Solution s;
    vector<int> v = {1, 2, 3, 4, 5, 6};
    int k = 2;
    vector<vector<int>> ans = s.divideArray(v, k);
    for(int i = 0; i < ans.size(); ++i) {
        for(int j = 0; j < ans[i].size(); ++j) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}