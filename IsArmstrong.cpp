/*
You are given a 3-digit number n, Find whether it is an Armstrong number or not.

An Armstrong number of three digits is a number such that the sum of the cubes of its digits is equal to the number itself. 371 is an Armstrong number since 33 + 73 + 13 = 371.

Note: Return "true" if it is an Armstrong number else return "false".
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    string armstrongNumber(int n) {
        int temp = n;
        string s = to_string(n);
        string isArmstrong = "false";
        int sum = 0;
        for(int i = 0; i<=5;i++){
            if (s.size()==1){
                break;
            }
            sum+=pow(n%10,3);
            n = n/10;
        }
        if(sum==temp){
            isArmstrong = "true";
        }
        return isArmstrong;
    }
};

int main(){
    Solution s;
    string s1 = s.armstrongNumber(153);
    cout<<s1;
    return 0;
}