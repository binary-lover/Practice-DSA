// 28. Find the Index of the First Occurrence in a String
// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // efficient by memory space
    int strStr(string haystack, string needle) {
        //using less momory space
        if (needle.empty()) {
            return 0;
        }
        for (int i = 0; i <= haystack.size()- needle.size(); i++) {
            int j = 0;
            for (; j < needle.size(); j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == needle.size()) {
                return i;
            }
        }
        return -1;
    }
    // int strStr(string haystack, string needle) {
    //     if (needle.empty()) {
    //         return 0;
    //     }
    //     int n = haystack.size();
    //     int m = needle.size();
    //     for (int i = 0; i <= n - m; i++) {
    //         if (haystack.substr(i, m) == needle) {
    //             return i;
    //         }
    //     }
    //     return -1;
    // }

    // less efficient
    // int strStr(string haystack, string needle) {
    //     if (needle.empty()) {
    //         return 0;
    //     }
    //     int n = haystack.size();
    //     int m = needle.size();
    //     for (int i = 0; i <= n - m; i++) {
    //         int j = 0;
    //         for (; j < m; j++) {
    //             if (haystack[i + j] != needle[j]) {
    //                 break;
    //             }
    //         }
    //         if (j == m) {
    //             return i;
    //         }
    //     }
    //     return -1;
    // }
};
int main(){
    Solution s;
    string haystack = "saqdbutsad";
    string needle = "sad";
    cout<<s.strStr(haystack, needle)<<endl;

    
    return 0;
}