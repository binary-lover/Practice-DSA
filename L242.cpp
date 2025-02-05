/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp;
        map<char,int>mp2;
        // cout<<bool(mp==mp2)<<endl;
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
            mp2[t[i]]++;
        }
        return mp==mp2;
    }
};

int main(){
    Solution s;
    cout<<s.isAnagram("anagram","nagaram")<<endl;

    return 0;
}