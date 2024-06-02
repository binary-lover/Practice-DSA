/*Given a list s that initially contains only a single value 0. There will be q queries of the following types:

0 x: Insert x in the list
1 x: For every element a in s, replace it with a ^ x. ('^' denotes the bitwise XOR operator)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> constructList(int q, vector<vector<int>> &queries)
    {
        vector<int> s = {0};
        int tempwise = 0;
        for (int i = 0; i < q; i++)
        {
            if (queries[i][0] == 0)
            {
                s.push_back(queries[i][1] ^ tempwise);
            }
            else if (queries[i][0] == 1)
            {
                tempwise ^= queries[i][1];
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            s[i] ^= tempwise;
        }

        sort(s.begin(), s.end());
        return s;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> v = {{0, 6}, {0, 3}, {0, 2}, {1, 4}, {1, 5}};
    std::vector<int> lis = s.constructList(5, v);
    for (int i = 0; i < lis.size(); i++)
    {
        cout << lis[i] << " ";
    }

    return 0;
}