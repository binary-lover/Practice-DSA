// 2418. Sort the People

// You are given an array of strings names, and an array heights that consists of distinct positive integers. Both arrays are of length n.

// For each index i, names[i] and heights[i] denote the name and height of the ith person.

// Return names sorted in descending order by the people's heights.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // using time O(n)
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int, string> m;
        for(int i=0; i<names.size(); i++){
            m[heights[i]] = names[i];
        }
        sort(heights.begin(), heights.end(), greater<int>());
        vector<string> result;
        for(auto x: heights){
            result.push_back(m[x]);
        }
        return result;
        //
    }
    // vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
    //     vector<pair<int, string>> v;
    //     for(int i=0; i<names.size(); i++){
    //         v.push_back({heights[i], names[i]});
    //     }
    //     sort(v.begin(), v.end(), greater<pair<int, string>>());
    //     vector<string> result;
    //     for(auto x: v){
    //         result.push_back(x.second);
    //     }
    //     return result;
        
    // }
    // time complexity: O(nlogn) space complexity: O(n)
};

int main(){
    Solution s;
    vector<string> names = {"Alex","Ben","Charlie","David","Evan"};
    vector<int> heights = {5,3,2,4,1};
    vector<string> result = s.sortPeople(names, heights);
    for(auto x: result){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}