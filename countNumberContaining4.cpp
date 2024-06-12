// You are given a number n, Return the count of total numbers from 1 to n containing 4 as a digit.
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countNumberswith4(int n) {
        int count = 0;
        if(n<4){
            return 0;
        }

        for (int i = 1; i <= n; i++)
        {
            string i2 = to_string(i);
            auto it = find(i2.begin(), i2.end(), '4');
            if (it != i2.end()) {
                // '4' is present in the string
                count++;
            }

        }
        return count;
    }
};


int main(){
    Solution s;
    int count = s.countNumberswith4(444);
    cout<<count;
    return 0;
}