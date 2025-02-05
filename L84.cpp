// 84. Largest Rectangle in Histogram
// Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextSmallerElements(vector<int>& heights, int n) {
        stack<int> min;
        min.push(-1);
        vector<int> result(n);

        for(int i = n-1 ; i >= 0; i--) {
            int curr = heights[i];
            while( min.top() != -1 && heights[min.top()] >= curr ) {
                min.pop();
            }
            result[i] = min.top();
            min.push(i);
        }
        return result;
    }

    vector<int> prevSmallerElements(vector<int>& heights, int n) {
         stack<int> min;
        min.push(-1);
        vector<int> result(n);

        for(int i = 0 ; i < n ; i++) {
            int curr = heights[i];
            while( min.top() != -1 && heights[min.top()] >= curr ) {
                min.pop();
            }
            result[i] = min.top();
            min.push(i);
        }
        return result;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> next(n);
        next = nextSmallerElements(heights,n);

        vector<int> prev(n);
        prev = prevSmallerElements(heights,n);

        int area = INT_MIN;

        for(int i = 0; i<n; i++){
            int l = heights[i];

            if(next[i] == -1){
                next[i]=n;
            }

            int b = next[i] - prev[i] - 1;
            int newArea = l*b;
            area = max(newArea, area);
        }
        return area;
    }
};

int main(){
    Solution sol;
    vector<int> heights = {2,1,5,6,2,3};
    cout << sol.largestRectangleArea(heights) << endl;
    return 0;
}