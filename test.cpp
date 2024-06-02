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
        for (int i = 0; i < q; i++)
        {
            if (queries[i][0] == 0)
            {
                s.push_back(queries[i][1]); 
            }
            else if (queries[i][0] == 1)
            {
                for (int j = 0; j < s.size(); j++)
                {
                    s[j]^= queries[i][1];
                    
                }
            }
        }

        sort(s.begin(), s.end());
        return s;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> v = {{0, 1}, {0, 3}, {0, 2}, {1, 4}, {0, 5}};
    std::vector<int> lis = s.constructList(5, v);
    for (int i = 0; i < lis.size(); i++)
    {
        cout << lis[i] << " ";
    }

    return 0;
}