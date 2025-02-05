/*
You are given two strings s and t consisting of only lowercase English letters.

Return the minimum number of characters that need to be appended to the end of s so that t becomes a subsequence of s.

A subsequence is a string that can be derived from another string by deleting some or no characters without changing the order of the remaining characters.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int appendCharacters(string s, string t) {
        int x = 0;
        int index = 0;
        int sLen = s.size();
        int tLen = t.size();
        for (int i = 0; i < sLen; i++)
        {
            if(s[i]==t[x]){
                x++;
                index++;
            }
            
        }
        return tLen -x;
    }
};

int main(){
    Solution s;
    cout << s.appendCharacters("coadching", "coding") << endl;
    // string name = "lucky";
    // name.erase(0,3);
    // cout<<name;
    return 0;
}