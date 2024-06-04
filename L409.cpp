/*
Given a string 's' which consists of lowercase or uppercase letters, return the length of the longest 
palindrome
 that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        int ans = 0;
        bool odd = false;
        for (auto it = freq.begin(); it != freq.end(); it++) {
            if (it->second % 2 == 0) {
                ans += it->second;
            } else {
                ans += it->second - 1;
                odd = true;
            }
        }
        return odd ? ans + 1 : ans;
    }
};

int main() {
    Solution s;
    cout << s.longestPalindrome("abccccdd") << endl;
    // cout << s.longestPalindrome("a") << endl;
    // cout << s.longestPalindrome("bb") << endl;
    // cout << s.longestPalindrome("ab") << endl;
    // cout << s.longestPalindrome("aaabbb") << endl;
    // cout << s.longestPalindrome("aaaaa") << endl;

    return 0;
}