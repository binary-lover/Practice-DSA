#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int trapped = 0;

        if(height.size()<3){
            return 0;
        }
        int left = 0;
        int right = height.size()-1;
        int left2 = 0;
        int right2 = 0;
        while(left<right){
            if(height[left]<height[right]){
                if(height[left]>left2){
                    left2 = height[left];
                }else{
                    trapped += left2 - height[left];
                }
                left++;
            }else{
                if(height[right]>right2){
                    right2 = height[right];
                }else{
                    trapped += right2 - height[right];
                }
                right--;
            }
            
        }
        
        return trapped;
    }
};
int main(){
    Solution s;
    std::vector<int> height = {4,2,0,3,2,5};
    cout<<s.trap(height);
    
    return 0;
}