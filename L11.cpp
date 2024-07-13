// 11. Container With Most Water

// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;  // Initialize maxArea to 0 instead of -Infinity
        while (left < right) {
            int area = (right - left) * min(height[left], height[right]);
            maxArea = max(maxArea, area);
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }}
        return maxArea;

    }
};

int main(){
    Solution s;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << s.maxArea(height) << endl;

    return 0;
}