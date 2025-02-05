// 739. Daily Temperatures

// Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0); // initialize result vector with 0 with size of temperatures
        stack<int> s; // stack to store the index of temperatures
        for(int i=0;i<temperatures.size();i++){
            while(!s.empty() && temperatures[i] > temperatures[s.top()]){ // if stack is not empty and current temperature is greater than the temperature at the top of stack
                result[s.top()] = i - s.top(); // store the difference of index of current temperature and the temperature at the top of stack
                s.pop(); // pop the top of stack
            }
            s.push(i); // push the index of current temperature
        }
        return result;
    
    }

};

int main(){
    Solution s;
    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> result = s.dailyTemperatures(temperatures);
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    
    
    return 0;
}