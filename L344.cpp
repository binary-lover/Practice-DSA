#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int len = s.size() - 1;
        for (int i = 0; i < s.size() / 2; i++)
        {
            swap(s[i], s[len]);
            len--;
        }
    }
};

int main()
{
    Solution s;
    vector<char> v = {'a', 'b', 'c', 'd', 'e', 'f'};
    s.reverseString(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}