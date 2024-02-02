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
            
        }


        cout<<endl<<"********************"<<endl;
        for (int j = 1; j < stringArray.size(); j++)
        {
            
        }
        return max;
        
    }
};
int main(){
    Solution s;
    cout<<s.lengthOfLongestSubstring("abcabcbb");
    return 0;
}


// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     // Assuming you have a vector of strings (similar to an array)
//     vector<std::string> stringArray = {"element1", "element2", "element3"};
//     stringArray.erase(stringArray.begin());
//     // Now, stringArray does not contain the first element
//     cout<<stringArray[0];
//     return 0;
// }
