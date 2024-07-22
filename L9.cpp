// 9. Palindrome Number
// Given an integer x, return true if x is a palindrome, and false otherwise.

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long temp = x;
        long long rev = 0;
        while(temp>0){
            rev = rev*10 + temp%10;
            temp = temp/10;
        }
        return rev == x;
    }
    
};
int main(){
    
    Solution s;
    cout << s.isPalindrome(121) << endl;
    cout << s.isPalindrome(-121) << endl;
    cout << s.isPalindrome(10) << endl;
    cout << s.isPalindrome(-101) << endl;

    cout << s.isPalindrome(0) << endl;
    cout << s.isPalindrome(1) << endl;
    cout << s.isPalindrome(11) << endl;
    cout << s.isPalindrome(111) << endl;

    return 0;
}