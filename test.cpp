#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        vector<std::string> stringArray;
        // stringArray.push_back("lu");
        for (int i = 0; i < s.length(); i++)
        {
            stringArray.push_back(to_string(s[i]));
            int temp = stringArray[0];
            // if (temp==stringArray[i]){
            //     stringArray.erase(stringArray.begin());
            // }
            max++;
        }
        
        for (int j = 0; j < stringArray.size(); j++)
        {
            cout<<stringArray[j]<<endl;
            
        }
        return max;
        
    }
};
int main(){
    Solution s;
    cout<<s.lengthOfLongestSubstring("abcabcbb");
    return 0;
}

